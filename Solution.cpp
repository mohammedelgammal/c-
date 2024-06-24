#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::help_classmate(vector<int> arr, int n)
{
    stack<int> stack;
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!stack.empty() && stack.top() >= arr[i])
            stack.pop();
        if (stack.empty())
            ans[i] = -1;
        else
            ans[i] = stack.top();
        stack.push(arr[i]);
    }
    return ans;
}