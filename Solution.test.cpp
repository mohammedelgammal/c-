#include "Solution"

#include <gtest/gtest.h>

TEST(UniquePaths, small) {
  string str = "bbbab";
  int upaths = longestPalindromeSubseq(str);
  EXPECT_EQ(upaths, 4);
}