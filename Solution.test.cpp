#include "Solution"

#include <gtest/gtest.h>

TEST(mergeIntervals, IntersectingIntervals) {
  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  vector<vector<int>> ans{{1, 6}, {8, 10}, {15, 18}};
  EXPECT_EQ(merge(intervals), ans);
}