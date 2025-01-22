#include "Solution"

#include <gtest/gtest.h>

TEST(maxTurbulenceSize, onlyIncrementing) {
  vector<int> nums{4, 8, 12, 16};
  EXPECT_EQ(maxTurbulenceSize(nums), 2);
}