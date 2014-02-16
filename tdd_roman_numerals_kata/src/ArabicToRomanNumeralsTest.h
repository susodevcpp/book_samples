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
  
  void isConvertedToRomanNumeral(const std::string& expectedRomanNumeral) const {
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

  void givenAnArabicNumber_convert_returnsCorrectRomanNumeral() {
    assertThat(1).isConvertedToRomanNumeral("I");
    assertThat(2).isConvertedToRomanNumeral("II");
    assertThat(3).isConvertedToRomanNumeral("III");
    assertThat(4).isConvertedToRomanNumeral("IV");
    assertThat(5).isConvertedToRomanNumeral("V");
    assertThat(6).isConvertedToRomanNumeral("VI");
    assertThat(10).isConvertedToRomanNumeral("X");
    assertThat(20).isConvertedToRomanNumeral("XX");
    assertThat(30).isConvertedToRomanNumeral("XXX");
    assertThat(33).isConvertedToRomanNumeral("XXXIII");
    assertThat(37).isConvertedToRomanNumeral("XXXVII");
    assertThat(100).isConvertedToRomanNumeral("C");
    assertThat(200).isConvertedToRomanNumeral("CC");
    assertThat(300).isConvertedToRomanNumeral("CCC");
    assertThat(333).isConvertedToRomanNumeral("CCCXXXIII");
  }
};

#endif