#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::findMin(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1, ans = nums[l];
    while (l <= r)
    {
        if (nums[l] < nums[r])
            return min(nums[l], ans);
        int m = l + (r - l) / 2;
        ans = min(nums[m], ans);
        if (nums[m] >= nums[r])
            l = m + 1;
        else
            r = m - 1;
    }
    return ans;
}
