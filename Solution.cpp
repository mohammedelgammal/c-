#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int index, vector<int> &nums, bool isStart)
{
    if (index >= nums.size() || (index + 1 == nums.size() && isStart))
        return 0;
    return max(nums[index] + robIt(index + 2, nums, true),
               robIt(index + 1, nums, false));
}

int Solution::rob(vector<int> &nums)
{
    return robIt(0, nums, true);
}