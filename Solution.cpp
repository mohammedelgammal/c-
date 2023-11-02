#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::mySqrt(int x)
{
    if(x <= 1)
    return x;

    int left = 1, right = x;

    while (left <= right)
    {
        uint64_t mid = left + (right - left) / 2;

        if(mid * mid == x)
            return mid;
        else if(mid * mid > x)
            right = mid - 1;
        else    
            left = mid + 1;
    }
        return right;
}
