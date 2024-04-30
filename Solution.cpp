#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::twoSum(vector<int> &numbers, int target)
{
    int l = 0, r = numbers.size() - 1;
    while (l < r)
    {
        int sum = numbers[l] + numbers[r];
        if (sum > target)
            r--;
        else if (sum < target)
            l++;
        else
            return {l + 1, r + 1};
    }
    return {};
}