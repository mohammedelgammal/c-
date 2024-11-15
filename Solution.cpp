#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::permute(vector<int> &nums)
{
    if (!nums.size())
        return {{}};
    vector<int> sliced(nums.begin() + 1, nums.end());
    vector<vector<int>> permutations = permute(sliced);
    vector<vector<int>> ans;
    for (vector<int> &permutation : permutations)
    {
        for (int i = 0; i <= permutation.size(); i++)
        {
            vector<int> newPermutation = permutation;
            newPermutation.insert(newPermutation.begin() + i, nums[0]);
            ans.push_back(newPermutation);
        }
    }
    return ans;
}