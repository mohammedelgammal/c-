#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution:: fib(int n)
{
    if (n < 2)
        return n;

    return fib(n - 2) + fib(n - 1);
}