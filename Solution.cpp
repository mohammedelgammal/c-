#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::longestConsecutive(vector<int> &nums)
{
    int size = nums.size(), ans = 0;
    unordered_set<int> set;

    for (int num : nums)
        set.insert(num);

    for (int i = 0; i < size; i++)
    {
        int current = nums[i],
            length = 0;
        if ((!set.contains(current - 1)))
            while (set.contains(current++))
                length++;
        else
            length = 1;
        ans = max(length, ans);
    }
    return ans;
}