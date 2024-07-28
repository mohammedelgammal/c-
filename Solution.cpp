#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::maxProfit(vector<int> &prices)
{
    int l = 0, r = 1, ans = 0;
    while(r < prices.size()) {
        if(prices[r] > prices[l]) 
            ans = max(prices[r] - prices[l], ans);
        else
            l = r;
        r++;
    }
    return ans;
}