#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution::majorityElement(vector<int> &nums)
{
    unordered_map<int, int> map;
    int major, max = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (map.contains(nums[i]))
            map.find(nums[i])->second++;
        else
            map.insert({nums[i], 1});
    }

    for (int j = 0; j < nums.size(); j++)
    {
        unordered_map<int, int>::iterator iter = map.find(nums[j]);

        if (map.find(nums[j])->second > max)
        {
            max = iter->second;
            major = iter->first;
        }
    }

    return major;
}