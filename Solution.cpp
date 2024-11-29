#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::numIslands(vector<vector<char>> &grid)
{
    int ans = 0;
    set<pair<int, int>> visited;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == '1' && !visited.contains({i, j}))
            {
                queue<pair<int, int>> queue;
                visited.insert({i, j});
                queue.push({i, j});
                while (!queue.empty())
                {
                    pair<int, int> curr = queue.front();
                    queue.pop();
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
                        if (in >= 0 && jn >= 0 && in < grid.size() && jn < grid[0].size() && grid[in][jn] == '1' && !visited.contains(neighbor))
                        {
                            visited.insert(neighbor);
                            queue.push(neighbor);
                        }
                    }
                }
                ans += 1;
            }
        }
    }
    return ans;
}