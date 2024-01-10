#include <iostream>
#include "Solution"

int trib(int n, unordered_map<int, int> &memo)
{
    if (n < 2)
        return n;
    if (n == 2)
        return 1;
    if (memo.contains(n))
        return memo[n];
    memo[n] = trib(n - 3, memo) + trib(n - 2, memo) + trib(n - 1, memo);
    return memo[n];
}

int Solution::tribonacci(int n)
{
    unordered_map<int, int> memo;
    return trib(n, memo);
}