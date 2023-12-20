#include <iostream>
#include <unordered_set>
#include "Solution"

vector<string> Solution::summaryRanges(vector<int> &nums)
{
    int size = nums.size(), l = 0, r = 1;
    vector<string> ans;

    while (r <= size)
    {
        if (r == size || nums[r] > nums[r - 1] + 1)
        {
            if (l == r - 1)
                ans.push_back(to_string(nums[l]));
            else
                ans.push_back(to_string(nums[l]) + "->" + to_string(nums[r - 1]));
            l = r;
        }
        r++;
    }
    return ans;
}