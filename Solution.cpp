#include <iostream>
#include "Solution"

int Solution::climbStairs(int n)
{
    vector<int> memo(n, 1);
    for (int i = 2; i <= n; i++)
        memo[i] = memo[i - 1] + memo[i - 2];
    return memo.back();
}