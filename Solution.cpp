#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::getConcatenation(vector<int> &nums)
{
    vector<int> ans(nums.size() * 2, 0);
    for(int i = 0; i < ans.size(); i++) 
        ans[i] = nums[i % nums.size()];
    return ans;
}