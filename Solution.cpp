#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::maxAreaOfIsland(vector<vector<int>> &grid)
{
    int maxArea = 0, area = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                stack<pair<int, int>> stack;
                area += 1;
                grid[i][j] = 2;
                stack.push({i, j});
                while (!stack.empty())
                {
                    pair<int, int> curr = stack.top();
                    stack.pop();
                    int ic = curr.first, jc = curr.second;
                    vector<pair<int, int>> neighbors = {
                        {ic + 1, jc},
                        {ic, jc + 1},
                        {ic - 1, jc},
                        {ic, jc - 1},
                    };
                    for (pair<int, int> &neighbor : neighbors)
                    {
                        int in = neighbor.first, jn = neighbor.second;
                        if (in >= 0 && jn >= 0 && in < grid.size() && jn < grid[0].size() && grid[in][jn] == 1)
                        {
                            area += 1;
                            grid[in][jn] = 2;
                            stack.push(neighbor);
                        }
                    }
                }
                maxArea = max(area, maxArea);
                area = 0;
            }
        }
    }
    return maxArea;
}