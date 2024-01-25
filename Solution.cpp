#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int l, int r, vector<int> &nums)
{
    int size = nums.size();
    vector<int> memo(size);
    memo[size - 2] = nums[r];
    for (int i = r - 1, k = size - 3; i >= l; i--, k--)
        memo[k] = max(nums[i] + memo[k + 2], memo[k + 1]);
    return memo.front();
}

int Solution::rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums.front();
    return max(robIt(0, nums.size() - 2, nums),
               robIt(1, nums.size() - 1, nums));
}
