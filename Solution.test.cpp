#include "Solution"

#include <gtest/gtest.h>

TEST(AscendSortTest, EmptyList) {
  int size = 0;
  int nums[] = {};
  int sorted[] = {};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, SingleElement) {
  int size = 1;
  int nums[] = {43};
  int sorted[] = {43};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, AlreadySorted) {
  int size = 5;
  int nums[] = {1, 2, 3, 4, 5};
  int sorted[] = {1, 2, 3, 4, 5};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, ReverseSorted) {
  int size = 5;
  int nums[] = {5, 4, 3, 2, 1};
  int sorted[] = {1, 2, 3, 4, 5};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, Random) {
  int size = 5;
  int nums[] = {3, 1, 4, 5, 2};
  int sorted[] = {1, 2, 3, 4, 5};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, Identical) {
  int size = 5;
  int nums[] = {7, 7, 7, 7, 7};
  int sorted[] = {7, 7, 7, 7, 7};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, NegativeList) {
  int size = 5;
  int nums[] = {-3, -1, -4, -2, -5};
  int sorted[] = {-5, -4, -3, -2, -1};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, PositveAndNegative) {
  int size = 5;
  int nums[] = {-1, 3, -4, 2, 0};
  int sorted[] = {-4, -1, 0, 2, 3};
  qsort(nums, size, sizeof(int), sort_ascend<int>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, Decimals) {
  int size = 4;
  double nums[] = {1.1, 2.2, 0.5, 3.3};
  double sorted[] = {0.5, 1.1, 2.2, 3.3};
  qsort(nums, size, sizeof(double), sort_ascend<double>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, IntAndDecimals) {
  int size = 4;
  double nums[] = {1, 2.2, 0.5, 3};
  double sorted[] = {0.5, 1, 2.2, 3};
  qsort(nums, size, sizeof(double), sort_ascend<double>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}

TEST(AscendSortTest, LargeInput) {
  int size = 3;
  long nums[] = {1000000, 999999, 1000001};
  long sorted[] = {999999, 1000000, 1000001};
  qsort(nums, size, sizeof(long), sort_ascend<long>);
  for (int i = 0; i < size; i++)
    EXPECT_EQ(nums[i], sorted[i]);
}