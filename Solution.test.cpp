#include "Solution"

#include <gtest/gtest.h>

TEST(UniquePaths, small) {
  vector<vector<int>> nums = {{0, 1}, {0, 0}};
  int upaths = uniquePathsWithObstacles(nums);
  EXPECT_EQ(upaths, 1);
}