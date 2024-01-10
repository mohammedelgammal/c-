#include <iostream>
#include "Solution"

int Solution::tribonacci(int n)
{
    vector<int> memo(n + 1, 1);
    memo.front() = 0;
    for (int i = 3; i < memo.size(); i++)
        memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
    return memo.back();
}