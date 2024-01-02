#include <iostream>
#include "Solution"

vector<vector<int>> Solution::findMatrix(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> reps(nums.size() + 1);
    int max = 0;

    for (int num : nums)
        if (++reps[num] > max)
            max = reps[num];

    for (int j = 0; j <= max; j++)
    {
        vector<int> sub;
        for (int i = 0; i <= nums.size(); i++)
        {
            if (reps[i])
            {
                sub.push_back(i);
                reps[i]--;
            }
        }
        if (!sub.empty())
            ans.push_back(sub);
    }
    return ans;
}