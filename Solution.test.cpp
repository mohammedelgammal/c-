#include "Solution"

#include <gtest/gtest.h>

TEST(SolutionTest, DifferentLengthStrings) {
  string text1 = "abcde";
  string text2 = "ace";
  int ans = longestCommonSubsequence(text1, text2);
  EXPECT_EQ(ans, 3);
}

TEST(SolutionTest, SameLengthDifferentStrings) {
  string text1 = "abc";
  string text2 = "def";
  int ans = longestCommonSubsequence(text1, text2);
  EXPECT_EQ(ans, 0);
}

TEST(SolutionTest, SameLengthSameStrings) {
  string text1 = "abc";
  string text2 = "abc";
  int ans = longestCommonSubsequence(text1, text2);
  EXPECT_EQ(ans, 3);
}