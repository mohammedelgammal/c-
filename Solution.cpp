#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

void Solution::rotate(vector<int> &nums, int k)
{
    int size = nums.size();
    vector<int> rotated(size);

    for (int i = 0; i < size; i++)
    {
        int newIndex = (i + k) < size ? (i + k) : (i + k) % size;
        rotated[newIndex] = nums[i];
    }

    nums = rotated;
}