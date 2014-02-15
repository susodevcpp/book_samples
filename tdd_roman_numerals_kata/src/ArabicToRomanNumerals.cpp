#include "ArabicToRomanNumerals.h"

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) {
  std::string romanNumeral = "I";
  if (arabicNumber == 2) {
    romanNumeral = "II";
  }
  return romanNumeral;
}