#include "ArabicToRomanNumerals.h"
#include <sstream>

ArabicToRomanNumerals::Digits ArabicToRomanNumerals::digits =
{
  { 100, "C" },
  { 10, "X" },
  { 1, "I" }
};

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) {
  std::stringstream romanNumeral;
  for (Digits::size_type index = 0; index != digits.size(); ++index) {
    while (arabicNumber >= digits[index].arabicNumber) {
      romanNumeral << digits[index].romanDigit;
      arabicNumber -= digits[index].arabicNumber;
    }
  }
  return romanNumeral.str();
}