#include <iostream>
#include "Solution"

int Solution::climbStairs(int n)
{
    int last = 1, bLast = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = last;
        last += bLast;
        bLast = temp;
    }
    return last;
}