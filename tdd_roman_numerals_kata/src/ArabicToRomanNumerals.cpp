#include "ArabicToRomanNumerals.h"
#include <sstream>

std::string ArabicToRomanNumerals::convert(unsigned int arabicNumber) {
  std::stringstream romanNumeral;
  while (arabicNumber >= 100) {
    romanNumeral << "C";
    arabicNumber -= 100;
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