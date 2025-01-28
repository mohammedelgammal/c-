#include "Solution"

#include <gtest/gtest.h>

TEST(eraseOverlapIntervals, IntersectingIntervals) {
  vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  EXPECT_EQ(eraseOverlapIntervals(intervals), 1);
}