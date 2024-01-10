#include <iostream>
#include "Solution"

int Solution::tribonacci(int n)
{
    int f = 0, s = 1, t = 1;
    for (int i = 3; i <= n; i++)
    {
        int l = f + s + t;
        f = s;
        s = t;
        t = l;
    }
    return t;
}