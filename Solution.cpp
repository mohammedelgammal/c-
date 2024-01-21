#include <iostream>
#include <algorithm>

#include "Solution"

int climb(int step, vector<int> &cost)
{
    if (step >= cost.size())
        return 0;
    return cost[step] + min(climb(step + 1, cost), climb(step + 2, cost));
}

int Solution::minCostClimbingStairs(vector<int> &cost)
{
    return min(climb(0, cost), climb(1, cost));
}