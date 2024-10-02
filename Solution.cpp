#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::findDuplicate(vector<int> &nums)
{
    int slow = 0, fast = 0, sslow = 0;
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow != fast);
    while(slow != sslow) {
        slow = nums[slow];
        sslow = nums[sslow];
    }
    return slow;
}