#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::containsNearbyDuplicate(vector<int> &nums, int k)
{
    set<int> visited;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > k)
            visited.erase(nums[i - k - 1]);

        if (visited.contains(nums[i]))
            return true;

        visited.insert(nums[i]);
    }

    return false;
}