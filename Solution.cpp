#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::maxArea(vector<int> &height)
{
    int right = height.size() - 1, left = 0, ans = 0;

    while (left < right)
    {
        int area = min(height[right], height[left]) * (right - left);
        ans = max(area, ans);
        if (height[right] > height[left])
            left++;
        else
            right--;
    }

    return ans;
}