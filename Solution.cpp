#include <iostream>

#include "Solution"

using namespace std;

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;

    for (int j = 0; j < nums.size(); j++)
    {
        int compliment = target - nums[j];

        if (map.count(compliment))
            return {j, map[compliment]};

        map[nums[j]] = j;
    }

    return {};
}