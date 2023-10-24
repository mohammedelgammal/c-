#include <iostream>

#include "Solution"

using namespace std;

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
        map[nums[i]] = i;

    for (int j = 0; j < nums.size(); j++)
    {
        int compliment = target - nums[j];

        if (map[compliment] && map[compliment] != j)
            return {j, map[compliment]};
    }

    return {};
}