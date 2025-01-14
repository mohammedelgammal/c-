#include "Solution"

#include <gtest/gtest.h>

TEST(MaximumOddBinaryNumber, normal) {
  string s = "010";
  EXPECT_EQ(maximumOddBinaryNumber(s), "001");
}