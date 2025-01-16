#include "Solution"

#include <gtest/gtest.h>

TEST(MaximumDepthOfValidParenthesis, includingOtherCharacters) {
  string s = "(1+(2*3)+((8)/4))+1";
  EXPECT_EQ(maxDepth(s), 3);
}