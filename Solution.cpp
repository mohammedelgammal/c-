#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::largestRectangleArea(vector<int> &heights)
{
    int ans = 0;
    stack<pair<int, int>> stack;
    for (int i = 0; i < heights.size(); i++)
    {
        int index = i;
        while (!stack.empty() && stack.top().second > heights[i])
        {
            pair<int, int> col = stack.top();
            int area = col.second * (i - col.first);
            ans = max(area, ans);
            index = col.first;
            stack.pop();
        }
        stack.push({index, heights[i]});
    }
    while (!stack.empty())
    {
        pair<int, int> col = stack.top();
        int area = col.second * (heights.size() - col.first);
        ans = max(area, ans);
        stack.pop();
    }
    return ans;
}