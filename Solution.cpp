#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::longestConsecutive(vector<int> &nums)
{
    int size = nums.size(),
        ans = 0;
    unordered_set<int> set;

    for (int num : nums)
        set.insert(num);

    for (int num : set)
    {
        int length = 0;
        if (!set.contains(num - 1))
            while (set.contains(num + length))
                length++;
        ans = max(length, ans);
    }

    return ans;
}