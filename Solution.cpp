#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int num : nums)
        pq.push(num);
    for (int i = 0; i + 1 < k; i++)
        pq.pop();
    return pq.top();
}