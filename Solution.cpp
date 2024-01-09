#include <iostream>
#include "Solution"

int climb(int n, unordered_map<int, int> &memo)
{
    if (n <= 1)
        return 1;

    if (memo.contains(n))
        return memo[n];

    memo[n] = climb(n - 1, memo) + climb(n - 2, memo);
    return memo[n];
}

int Solution::climbStairs(int n)
{
    unordered_map<int, int> memo;
    return climb(n, memo);
}