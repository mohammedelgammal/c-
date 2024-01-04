#include <iostream>
#include "Solution"

int Solution::minOperations(vector<int> &nums)
{
    unordered_map<int, int> reps;
    int ans = 0;

    for (int num : nums)
        reps[num]++;

    for (auto &it : reps)
    {
        if (it.second == 1)
            return -1;
        ans += ceil(it.second / 3.0F);
    }
    return ans;
}