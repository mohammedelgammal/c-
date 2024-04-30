#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i && nums[i] == nums[i - 1])
            continue;
        int l = i + 1, r = nums.size() - 1, target = nums[i] * -1;
        while (l < r)
        {
            if (nums[l] + nums[r] == target)
            {
                while (l < r && nums[l] == nums[l + 1])
                    l++;
                while (l < r && nums[r] == nums[r - 1])
                    r--;
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
            else if (nums[l] + nums[r] > target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return ans;
}