#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::dailyTemperatures(vector<int> &temperatures)
{
    stack<int> stack;
    vector<int> ans;
    // monotonically decreasing stack - find previous bigger number
    for (int num : temperatures)
    {
        while (!stack.empty() && num > stack.top())
            stack.pop();
        if (stack.empty())
            ans.push_back(-1);
        else
            ans.push_back(stack.top());
        stack.push(num);
    }
    return ans;
}