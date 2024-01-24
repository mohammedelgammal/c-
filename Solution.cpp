#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::rob(vector<int> &nums)
{
    int size = nums.size(),
        choiceOne = 0,
        choiceTwo = nums[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        int temp = choiceTwo;
        choiceTwo = max(nums[i] + choiceOne, choiceTwo);
        choiceOne = temp;
    }
    return choiceTwo;
}