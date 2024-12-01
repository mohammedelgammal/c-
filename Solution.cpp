#include <iostream>
#include <algorithm>

#include "Solution"

int orangesRotting(vector<vector<int>> &grid)
{
    int mins = 0,
        fresh = 0;
    queue<pair<int, int>> queue;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
                fresh += 1;
            if (grid[i][j] == 2)
                queue.push({i, j});
        }
    }
    while (!queue.empty() && fresh > 0)
    {
        int size = queue.size();
        for (int k = 0; k < size; k++)
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
                int in = neighbor.first,
                    jn = neighbor.second;
                if (in >= 0 && jn >= 0 && in < grid.size() && jn < grid[0].size() && grid[in][jn] == 1)
                {
                    grid[in][jn] = 2;
                    fresh -= 1;
                    queue.push({in, jn});
                }
            }
        }
        mins += 1;
    }
    return fresh > 0 ? -1 : mins;
}