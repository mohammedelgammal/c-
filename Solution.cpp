#include <iostream>
#include "Solution"

int Solution::fib(int n)
{
    if (n < 2)
        return n;

    return fib(n - 1) + fib(n - 2);
}