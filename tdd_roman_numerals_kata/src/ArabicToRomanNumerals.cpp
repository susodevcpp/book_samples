#include "ArabicToRomanNumerals.h"
#include <sstream>

ArabicToRomanNumerals::Digits ArabicToRomanNumerals::digits =
{
  { 100, "C"},
};

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) {
  std::stringstream romanNumeral;
  while (arabicNumber >= digits[0].arabicNumber) {
    romanNumeral << digits[0].romanDigit;
    arabicNumber -= digits[0].arabicNumber;
  }
  while (arabicNumber >= 10) {
    romanNumeral << "X";
    arabicNumber -= 10;
  }
  while (arabicNumber >= 1) {
    romanNumeral << "I";
    arabicNumber--;
  }
  return romanNumeral.str();
}