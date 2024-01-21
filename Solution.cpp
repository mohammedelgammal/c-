#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::minCostClimbingStairs(vector<int> &cost)
{
    int size = cost.size() + 1;
    vector<int> memo(size, 0);
    cost.push_back(0);
    memo[size - 2] = cost[size - 2];
    for (int i = size - 3; i >= 0; i--)
        memo[i] = cost[i] + min(memo[i + 1], memo[i + 2]);
    return min(memo[0], memo[1]);
}