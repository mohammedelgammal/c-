#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::searchInsert(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while(r >= l) {
        int mid = l + (r - l) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return l;
}