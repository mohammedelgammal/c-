#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::minEatingSpeed(vector<int> &piles, int h)
{
    int l = 1, r = *max_element(piles.begin(), piles.end()), ans = INT_MAX;
    while (l <= r)
    {
        int k = l + (r - l) / 2;
        long hours = 0;
        for (int pile : piles)
            hours += pile % k ? pile / k + 1 : pile / k;
        if (hours <= h)
        {
            ans = min(k, ans);
            r = k - 1;
        }
        else
            l = k + 1;
    }
    return ans;
}
