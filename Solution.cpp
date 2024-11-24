#include <iostream>
#include <algorithm>

#include "Solution"

int getPerimeter(int i, int j, set<pair<int, int>> &visited, vector<vector<int>> &grid) {
    if(visited.contains({i, j}))
        return 0;
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || !grid[i][j]) 
        return 1;
    visited.insert({i, j});
    int perimeter = getPerimeter(i + 1, j, visited, grid) + getPerimeter(i, j + 1, visited, grid) + getPerimeter(i - 1, j, visited, grid) + getPerimeter(i, j - 1, visited, grid);
    return perimeter;
}

int Solution::islandPerimeter(vector<vector<int>> &grid)
{
    set<pair<int, int>> visited;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[0].size(); j++) {
            if(grid[i][j])
                return getPerimeter(i, j, visited, grid);
        }
    }
    return 0;
}