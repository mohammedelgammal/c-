#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::findKthLargest(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}