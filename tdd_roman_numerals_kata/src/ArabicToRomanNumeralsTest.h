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
  }

  void givenArabicNumber2_convert_returnsII() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("II", unitUnderTest.convert(2));
  }

  void givenArabicNumber3_convert_returnsIII() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("III", unitUnderTest.convert(3));
  }

  void givenArabicNumber10_convert_returnsX() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("X", unitUnderTest.convert(10));
  }

  void givenArabicNumber20_convert_returnsXX() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("XX", unitUnderTest.convert(20));
  }

  void givenArabicNumber30_convert_returnsXXX() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("XXX", unitUnderTest.convert(30));
  }

  void givenArabicNumber33_convert_returnsXXXIII() {
    ArabicToRomanNumerals unitUnderTest;
    ASSERT_EQUAL("XXXIII", unitUnderTest.convert(33));
  }
};

#endif