#ifndef ARABIC_TO_ROMAN_NUMERALS_TEST_H_
#define ARABIC_TO_ROMAN_NUMERALS_TEST_H_

#include "cute.h"
#include "ArabicToRomanNumerals.h"

class ArabicToRomanNumeralsConversionAssert {
private:
  const unsigned int arabicNumber;

public:
  ArabicToRomanNumeralsConversionAssert(const unsigned int arabicNumber) :
    arabicNumber(arabicNumber) {
  }
  
  void isConvertedToRomanNumeral(const std::string& expectedRomanNumeral) {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL(expectedRomanNumeral, unitUnderTest.convert(arabicNumber));
  }
};

ArabicToRomanNumeralsConversionAssert assertThat(const unsigned int arabicNumber) {
  ArabicToRomanNumeralsConversionAssert assert(arabicNumber);
  return assert;
};

class ArabicToRomanNumeralsTest {
public:
  ArabicToRomanNumeralsTest() {
  }

  void execute() {
    assertThat(1).isConvertedToRomanNumeral("I");
    assertThat(2).isConvertedToRomanNumeral("II");
    assertThat(3).isConvertedToRomanNumeral("III");
    assertThat(10).isConvertedToRomanNumeral("X");
    assertThat(20).isConvertedToRomanNumeral("XX");
    assertThat(30).isConvertedToRomanNumeral("XXX");
    assertThat(33).isConvertedToRomanNumeral("XXXIII");
  }
};

#endif