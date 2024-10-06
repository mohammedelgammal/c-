#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::minimumDifference(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int l = 0, r = k - 1, ans = INT_MAX;
    while(r < nums.size()) {
        ans = min(nums[r] - nums[l], ans);
        r++;
        l++;
    }
    return ans;
}