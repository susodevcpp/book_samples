#include "ArabicToRomanNumerals.h"
#include <sstream>

const unsigned int ArabicToRomanNumerals::MAX_SUPPORTED_ARABIC_NUMBER = 4999;

ArabicToRomanNumerals::Digits ArabicToRomanNumerals::digits =
{
  { 1000, "M" },
  { 900, "CM" },
  { 500, "D" },
  { 400, "CD" },
  { 100, "C" },
  { 90, "XC" },
  { 50, "L" },
  { 40, "XL" },
  { 10, "X" },
  { 9, "IX" },
  { 5, "V" },
  { 4, "IV" },
  { 1, "I" }
};

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) const {
  checkParameter(arabicNumber);
  return performConversion(arabicNumber);
}

void ArabicToRomanNumerals::checkParameter(const unsigned int arabicNumber) const {
  if (arabicNumber > MAX_SUPPORTED_ARABIC_NUMBER) {
    throw std::invalid_argument("arabicNumber");
  }
}

std::string ArabicToRomanNumerals::performConversion(unsigned int arabicNumber) const {
  std::stringstream romanNumeral;
  for (Digits::size_type index = 0; index != digits.size(); ++index) {
    while (arabicNumber >= digits[index].arabicNumber) {
      romanNumeral << digits[index].romanDigit;
      arabicNumber -= digits[index].arabicNumber;
    }
  }
  return romanNumeral.str();
}