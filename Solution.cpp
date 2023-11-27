#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    for (int i = 0, size = mat.size(); i < 3 && mat != target; i++)
    {
        int l = 0, t = l, r = mat.size() - 1, b = r;
        while (t < b)
        {
            for (int i = 0; i < r - l; i++)
            {
                int tl = mat[t][l + i];

                mat[t][l + i] = mat[b - i][l];
                mat[b - i][l] = mat[b][r - i];
                mat[b][r - i] = mat[t + i][r];
                mat[t + i][r] = tl;
            }
            l++;
            t++;
            r--;
            b--;
        }
    }

    return mat == target;
}