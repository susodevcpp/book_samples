#include "ArabicToRomanNumerals.h"
#include <sstream>

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) {
  std::stringstream romanNumeral;
  while (arabicNumber >= 1) {
    romanNumeral << "I";
    arabicNumber--;
  }
  return romanNumeral.str();
}