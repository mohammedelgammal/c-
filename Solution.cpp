#include <iostream>
#include <algorithm>

#include "Solution"

int robIt(int l, int r, vector<int> &nums, unordered_map<int, int> &memo)
{
    if (l > r)
        return 0;
    if (memo.contains(l))
        return memo[l];
    memo[l] = max(nums[l] + robIt(l + 2, r, nums, memo),
                  robIt(l + 1, r, nums, memo));
    return memo[l];
}

int Solution::rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums.front();
    int size = nums.size();
    unordered_map<int, int> memoOne, memoTwo;
    return max(robIt(0, size - 2, nums, memoOne),
               robIt(1, size - 1, nums, memoTwo));
}
