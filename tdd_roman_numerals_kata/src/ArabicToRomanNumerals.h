#ifndef ARABIC_TO_ROMAN_NUMERALS_H_
#define ARABIC_TO_ROMAN_NUMERALS_H_

#include <string>
#include <vector>

class ArabicToRomanNumerals {
public:
  std::string convert(unsigned int arabicNumber);

private:
  static const unsigned int MAX_SUPPORTED_ARABIC_NUMBER;

  struct ArabicToNumeralDigit {
    unsigned int arabicNumber;
    std::string romanDigit;
  };

  typedef std::vector<ArabicToNumeralDigit> Digits;
  static Digits digits;
};

#endif