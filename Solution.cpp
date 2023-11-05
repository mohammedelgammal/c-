#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::maxProfit(vector<int> &prices)
{
    int left = 0, right = 1;
    vector<int> buy, sell;

    while (right < prices.size())
    {
        if (prices[left] < prices[right])
        {
            buy.push_back(prices[left]);
            sell.push_back(prices[right]);
        }
        left++;
        right++;
    }

    int maxProfit = sell[sell.size() - 1] - buy[0];
    int j = 0;
    int profit = 0;

    while (j < max(sell.size(), buy.size()))
    {
        profit += (sell[j] - buy[j]);
        j++;
    }

    return max(profit, maxProfit);
}