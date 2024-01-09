#include <iostream>
#include "Solution"

int memoFib(int n, unordered_map<int, int> &memo)
{
    if (n < 2)
        return n;
    if (memo.contains(n))
        return memo[n];
    memo[n] = memoFib(n - 1, memo) + memoFib(n - 2, memo);
    return memo[n];
}

int Solution::fib(int n)
{
    unordered_map<int, int> map;
    return memoFib(n, map);
}