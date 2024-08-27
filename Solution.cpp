#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> ans;
    deque<int> deque;
    int l = 0, r = 0;
    while (r < nums.size())
    {
        while (!deque.empty() && nums[deque.back()] < nums[r])
            deque.pop_back();
        deque.push_back(r);
        if(l > deque.front()) deque.pop_front();
        if(r + 1 >= k) {
            ans.push_back(nums[deque.front()]);
            l++;
        }
        r++;
    }
    return ans;
}