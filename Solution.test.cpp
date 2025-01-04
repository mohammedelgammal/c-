#include "Solution"

#include <gtest/gtest.h>

TEST(UniquePaths, small) {
  int upaths = uniquePaths(3, 3);
  EXPECT_EQ(upaths, 6);
}