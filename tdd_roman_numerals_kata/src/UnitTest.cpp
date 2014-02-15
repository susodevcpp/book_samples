#include "cute.h"
#include "cute_counting_listener.h"
#include "ostream_listener.h"
#include "cute_runner.h"

#include "ArabicToRomanNumeralsTest.h"

typedef cute::counting_listener<cute::ostream_listener <cute::null_listener> > TestListener;

void addTestCasesToSuite(cute::suite& testSuite) {
  testSuite += CUTE_SMEMFUN(ArabicToRomanNumeralsTest, execute);
}

int runTestSuite(int argc, char* argv[]) {
  cute::suite romanNumeralsTestSuite;
  addTestCasesToSuite(romanNumeralsTestSuite);

  TestListener testListener;
  makeRunner(testListener, argc, argv)(romanNumeralsTestSuite,
    "Roman Numerals Test Suite");
  return static_cast<int>(testListener.failedTests);
}

int main(int argc, char* argv[]) {
  return runTestSuite(argc, argv);
}
