#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    int size = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1, right = size - 1;

        while (left < right)
        {
            int threeSum = nums[i] + nums[right] + nums[left];

            if (threeSum == 0)
            {
                ans.push_back({nums[i], nums[right], nums[left]});
                while (left < right + 1 && nums[left] == nums[left + 1])
                    left++;
                left++;
            }
            else if (threeSum > 0)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }

    return ans;
}