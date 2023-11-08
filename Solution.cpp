#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

bool Solution::canJump(vector<int> &nums)
{
    int size = nums.size(), target = size - 1;

    for (int i = target; i >= 0; i--)
    {
        if (i + nums[i] >= target)
            target = i;
    }

    return !target;
}