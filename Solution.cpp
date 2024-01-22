#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::minCostClimbingStairs(vector<int> &cost)
{
    int size = cost.size(),
        first = cost.back(),
        second = cost[size - 2];
    for (int i = size - 3; i >= 0; i--)
    {
        int temp = second;
        second = cost[i] + min(second, first);
        first = temp;
    }
    return min(first, second);
}