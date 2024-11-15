#include <iostream>
#include <algorithm>

#include "Solution"

void backtrack(int index, vector<int> &subset, vector<vector<int>> &ans, vector<int> nums)
{
    if (index == nums.size())
        return ans.push_back(subset);
    backtrack(index + 1, subset, ans, nums);
    subset.push_back(nums[index]);
    backtrack(index + 1, subset, ans, nums);
    subset.pop_back();
}

vector<vector<int>> Solution::subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> subset;
    backtrack(0, subset, ans, nums);
    return ans;
}