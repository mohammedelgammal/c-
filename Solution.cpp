#include <iostream>
#include <algorithm>

#include "Solution"

int explore(int i, int j, set<pair<int, int>> &visited, vector<vector<char>> &grid)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0' || visited.contains({i, j}))
        return 0;
    visited.insert({i, j});
    explore(i + 1, j, visited, grid);
    explore(i, j + 1, visited, grid);
    explore(i - 1, j, visited, grid);
    explore(i, j - 1, visited, grid);
    return 1;
}

int Solution::numIslands(vector<vector<char>> &grid)
{
    int ans = 0;
    set<pair<int, int>> visited;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (!visited.contains({i, j}))
            {
                ans += explore(i, j, visited, grid);
            }
        }
    }
    return ans;
}