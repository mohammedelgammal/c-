#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::maxArea(vector<int> &height)
{
    int ans = 0, l = 0, r = height.size() - 1;
    while (l < r)
    {
        int area = min(height[l], height[r]) * (r - l);
        ans = max(area, ans);
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return ans;
}