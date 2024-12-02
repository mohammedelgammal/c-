#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::countSubIslands(vector<vector<int>> &grid1,
                              vector<vector<int>> &grid2)
{
    int count = 0;
    set<pair<int, int>> visited;
    function<bool(int, int)> isSub = [&](int i, int j)
    {
        if (i < 0 || j < 0 || i >= grid2.size() || j >= grid2[0].size() || !grid2[i][j] || visited.contains({i, j}))
        {
            return true;
        }
        visited.insert({i, j});
        bool isCurrSub = grid1[i][j];
        isCurrSub &= isSub(i + 1, j);
        isCurrSub &= isSub(i, j + 1);
        isCurrSub &= isSub(i - 1, j);
        isCurrSub &= isSub(i, j - 1);
        return isCurrSub;
    };
    for (int i = 0; i < grid2.size(); i++)
    {
        for (int j = 0; j < grid2[0].size(); j++)
        {
            if (grid2[i][j] && !visited.contains({i, j}) && isSub(i, j))
                count += 1;
        }
    }
    return count;
}