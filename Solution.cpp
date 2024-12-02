#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::countSubIslands(vector<vector<int>> &grid1,
                    vector<vector<int>> &grid2)
{
    int count = 0;
    set<pair<int, int>> visited;
    for (int i = 0; i < grid2.size(); i++)
    {
        for (int j = 0; j < grid2[0].size(); j++)
        {
            if (grid2[i][j] && !visited.contains({i, j}))
            {
                stack<pair<int, int>> stack;
                bool isSub = grid1[i][j];
                visited.insert({i, j});
                stack.push({i, j});
                while (!stack.empty())
                {
                    pair<int, int> curr = stack.top();
                    stack.pop();
                    int ic = curr.first,
                        jc = curr.second;
                    vector<pair<int, int>> neighbors = {
                        {ic + 1, jc}, {ic, jc + 1}, {ic - 1, jc}, {ic, jc - 1}};
                    for (pair<int, int> &neighbor : neighbors)
                    {
                        int in = neighbor.first,
                            jn = neighbor.second;
                        if (in >= 0 && jn >= 0 && in < grid2.size() && jn < grid2[0].size() && !visited.contains(neighbor) && grid2[in][jn])
                        {
                            isSub &= grid1[in][jn];
                            visited.insert(neighbor);
                            stack.push(neighbor);
                        }
                    }
                }
                if (isSub)
                {
                    count += 1;
                }
            }
        }
    }
    return count;
}