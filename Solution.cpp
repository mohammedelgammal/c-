#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

vector<int> Solution::twoSum(vector<int> &numbers, int target)
{
    int size = numbers.size(),
        right = size - 1,
        left = 0;

    while (left < right)
    {
        int currentLooking = target - numbers[right];
        if (numbers[left] == currentLooking)
            return {left + 1, right + 1};
        if (numbers[left] > currentLooking)
            right--;
        else
            left++;
    }
    return {};
}
