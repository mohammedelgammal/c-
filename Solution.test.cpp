#include "Solution"

#include <gtest/gtest.h>

TEST(MaximumDepthOfValidParenthesis, includingOtherCharacters) {
  vector<int> nums{1, -2, 3, -2};
  EXPECT_EQ(maxSubarraySumCircular(nums), 3);
}