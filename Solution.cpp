#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::maxProfit(vector<int> &prices)
{
    int left = 0,
        right = 1,
        size = prices.size(),
        maxProfit = 0;

    while (right < size)
    {
        int todayPrice = prices[left++],
            nextPrice = prices[right++];

        if (todayPrice < nextPrice)
            maxProfit += (nextPrice - todayPrice);
    }
    return maxProfit;
}