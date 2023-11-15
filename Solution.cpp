#include <iostream>

#include "Solution"

using namespace std;

vector<int> Solution::applyOperations(vector<int> &nums)
{
    int left = 0, right = 0, size = nums.size();

    while (right < size)
    {
        if (nums[left] == nums[right])
        {
            nums[left] *= 2;
            nums[right] = 0;
        }
        left++;
        right++;
    }

    left = right = 0;

    while (right < size)
    {
        if (nums[right] != 0)
        {
            if(left == right)
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

    return nums;
}
