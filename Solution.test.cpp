#include "Solution"

#include <gtest/gtest.h>

TEST(insertInterval, IntersectionIntervals) {
  vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
  vector<int> target{4, 8};
  vector<vector<int>> ans{{1, 2}, {3, 10}, {12, 16}};
  EXPECT_EQ(insert(intervals, target), ans);
}