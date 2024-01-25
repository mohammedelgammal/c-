#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int l, int r, vector<int> &nums)
{
    if (l > r)
        return 0;
    return max(nums[l] + robIt(l + 2, r, nums), robIt(l + 1, r, nums));
}

int Solution::rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums.front();
    int size = nums.size();
    return max(robIt(0, size - 2, nums), robIt(1, size - 1, nums));
}