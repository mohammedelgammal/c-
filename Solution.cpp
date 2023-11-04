#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::climbStairs(int n)
{
    int last = 1, bfLast = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int temp = bfLast;
        bfLast += last;
        last = temp;
    }

    return bfLast;
}
