#include <gtest/gtest.h>

#include "IntroSelect"

TEST(IntroSelectTest, Sorted_Odd_Array)
{
    vector<int> nums{1, 3, 5};
    ASSERT_DOUBLE_EQ(introSelect(nums), 3);
}

TEST(IntroSelectTest, UnSorted_Odd_Array)
{
    vector<int> nums{5, 1, 3};
    ASSERT_DOUBLE_EQ(introSelect(nums), 3);
}

TEST(IntroSelectTest, Sorted_Even_Array)
{
    vector<int> nums{1, 3, 5, 7};
    ASSERT_DOUBLE_EQ(introSelect(nums), 4);
}

TEST(IntroSelectTest, UnSorted_Even_Array)
{
    vector<int> nums{5, 1, 7, 3};
    ASSERT_DOUBLE_EQ(introSelect(nums), 4);
}

TEST(IntroSelectTest, Single_Input)
{
    vector<int> nums{10};
    ASSERT_DOUBLE_EQ(introSelect(nums), 10);
}

TEST(IntroSelectTest, Identical_Numbers)
{
    vector<int> nums{4, 4, 4, 4, 4};
    ASSERT_DOUBLE_EQ(introSelect(nums), 4);
}

TEST(IntroSelectTest, Negative_Numbers)
{
    vector<int> nums{-1, 3, 2};
    ASSERT_DOUBLE_EQ(introSelect(nums), 2);
}

TEST(IntroSelectTest, Mixed_Negative_And_Positive_Numbers)
{
    vector<int> nums{-5, 3, 1};
    ASSERT_DOUBLE_EQ(introSelect(nums), 1);
}

TEST(IntroSelectTest, Large_Numbers)
{
    vector<int> nums{1000000, 5000000, 2000000, 4000000};
    ASSERT_DOUBLE_EQ(introSelect(nums), 3000000);
}

TEST(IntroSelectTest, Floating_Numbers)
{
    vector<double> nums{1.5, 2.5, 3.5};
    ASSERT_DOUBLE_EQ(introSelect(nums), 2.5);
}

TEST(IntroSelectTest, Empty_Input)
{
    vector<int> nums;
    ASSERT_THROW(introSelect(nums), invalid_argument);
}

TEST(IntroSelectTest, Unsorted_Positive_Negative_Zeros_Numbers)
{
    vector<int> nums{100, -100, 5000, -200, 0, 123456, -100000};
    ASSERT_DOUBLE_EQ(introSelect(nums), 0);
}