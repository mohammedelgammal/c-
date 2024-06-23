#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::dailyTemperatures(vector<int> &temperatures)
{
    stack<int> stack;
    vector<int> ans;
    // monotonic increasing stack
    for (int num : temperatures)
    {
        while (!stack.empty() && num < stack.top())
            stack.pop();
        stack.push(num);
    }
    while (!stack.empty())
    {
        ans.insert(ans.begin(), stack.top());
        stack.pop();
    }
    return ans;
}