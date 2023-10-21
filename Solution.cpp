#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution::maxProfit(vector<int> &prices)
{
    int profit = 0, lowestPrice = 0;

    for (int currentPrice = 1; currentPrice < prices.size(); currentPrice++)
    {
        if (prices[currentPrice] > prices[lowestPrice])
            profit = max(prices[currentPrice] - prices[lowestPrice],
                         profit);
        else
            lowestPrice = currentPrice;
    }

    return profit;
}
