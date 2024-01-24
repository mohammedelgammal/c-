#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int index, vector<int> &nums)
{
    if (index >= nums.size())
        return 0;
    return max(nums[index] + robIt(index + 2, nums), robIt(index + 1, nums));
}

int Solution::rob(vector<int> &nums)
{
    return robIt(0, nums);
}