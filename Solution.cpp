#include <iostream>
#include "Solution"

int Solution::climbStairs(int n)
{
    if (n <= 1)
        return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}