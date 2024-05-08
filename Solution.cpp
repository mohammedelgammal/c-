#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::trap(vector<int> &height)
{
    int l = 0, r = height.size() - 1, maxl = height[l], maxr = height[r], ans = 0;
    while (l < r)
        if (maxl < maxr)
        {
            l++;
            maxl = max(height[l], maxl);
            ans += maxl - height[l];
        }
        else
        {
            r--;
            maxr = max(height[r], maxr);
            ans += maxr - height[r];
        }
    return ans;
}