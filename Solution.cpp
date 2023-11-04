#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::climbStairs(int n)
{
    if (n <= 0)
        return 1;

    int leftShift = 0,
        rightShift = 0;

    if (n >= 2)
        rightShift = climbStairs(n - 2);

    leftShift = climbStairs(n - 1);

    return leftShift + rightShift;
}
