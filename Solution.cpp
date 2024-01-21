#include <iostream>
#include <algorithm>

#include "Solution"

int climb(int step, vector<int> &cost, unordered_map<int, int> &memo)
{
    if (step >= cost.size())
        return 0;
    if (memo.contains(step))
        return memo[step];
    memo[step] = cost[step] + min(climb(step + 1, cost, memo), climb(step + 2, cost, memo));
    return memo[step];
}

int Solution::minCostClimbingStairs(vector<int> &cost)
{
    unordered_map<int, int> memo;
    return min(climb(0, cost, memo), climb(1, cost, memo));
}