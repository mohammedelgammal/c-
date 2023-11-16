#include <iostream>
#include <vector>

#include "Solution"

int Solution::minSubArrayLen(int target, vector<int> &nums)
{
    int size = nums.size(), left = 0, right = 0,
        sum = 0, len = INT_MAX;

    while (right < size)
    {
        sum += nums[right++];
        while (sum >= target)
        {
            sum -= nums[left++];
            len = min(len, right - left + 1);
        }
    }

    if(len == INT_MAX)
        return 0;
    
    return len;
}

// 4