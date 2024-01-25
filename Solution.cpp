#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int l, int r, vector<int> &nums)
{
    int size = nums.size(), first = 0, second = nums[r];
    for (int i = r - 1; i >= l; i--)
    {
        int temp = second;
        second = max(nums[i] + first, second);
        first = temp;
    }
    return second;
}

int Solution::rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums.front();
    return max(robIt(0, nums.size() - 2, nums),
               robIt(1, nums.size() - 1, nums));
}
