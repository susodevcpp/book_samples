#ifndef ARABIC_TO_ROMAN_NUMERALS_TEST_H_
#define ARABIC_TO_ROMAN_NUMERALS_TEST_H_

#include "cute.h"
#include "ArabicToRomanNumerals.h"

class ArabicToRomanNumeralsTest {
public:
  ArabicToRomanNumeralsTest() {
  }

  void givenArabicNumber1_convert_returnsI() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("I", unitUnderTest.convert(1));
  };

  void givenArabicNumber2_convert_returnsII() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("II", unitUnderTest.convert(2));
  };
};

#endif