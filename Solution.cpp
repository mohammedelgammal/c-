#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

void Solution::moveZeroes(vector<int> &nums)
{
    int left = 0, right = 0, size = nums.size();

    while (right < size)
    {
        if (nums[right] != 0)
        {
            if (left == right)
            {
                left++;
                right++;
                continue;
            }

            int temp = nums[right];
            nums[right] = nums[left];
            nums[left++] = temp;
        }
        right++;
    }
}
