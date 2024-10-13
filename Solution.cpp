#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::containsNearbyDuplicate(vector<int> &nums, int k)
{
    set<int> set;
    int l = 0, r = 0;
    while(r < nums.size()) {
        if(r - l > k) set.erase(nums[l++]);
        if(set.contains(nums[r])) return true;
        set.insert(nums[r++]);
    }
    return false;
}