#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution:: fib(int n)
{
    if (n < 2)
        return n;

    int first = 1, second = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int temp = first;
        first += second;
        second = temp;
    }

    return first;
}