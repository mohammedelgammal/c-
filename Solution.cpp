#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::rob(vector<int> &nums)
{
    int size = nums.size() + 1;
    vector<int> memo(size);
    nums.push_back(0);
    memo[size - 2] = nums[size - 2];
    for (int i = size - 3; i >= 0; i--)
        memo[i] = max(nums[i] + memo[i + 2], memo[i + 1]);
    return memo.front();
}