#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::removeDuplicates(vector<int> &nums)
{
    int left = 0, right = 0;

    while (right < nums.size())
    {
        int count = 1;
        while (right + 1 < nums.size() && nums[right + 1] == nums[right])
        {
            count++;
            right++;
        }

        for (int i = 0; i < min(count, 2); i++)
        {
            nums[left] = nums[right];
            left++;
        }

        right++;
    }
    return left;
}