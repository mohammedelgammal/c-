#include <iostream>
#include "Solution"

int Solution::fib(int n)
{
    if (n < 2)
        return n;
    int bLast = 0, last = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = bLast;
        bLast = last;
        last += temp;
    }
    return last;
}