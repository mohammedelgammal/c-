#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::spiralMatrixIII(int rows, int cols, int rStart, int cStart)
{
    vector<vector<int>> ans;
    int left = cStart, top = rStart,
        right = cStart + 1, bottom = cStart + 1;

    while (ans.size() < rows * cols)
    {
        // iterate top rows
        for (int i = left; i < right; i++)
            if (top >= 0 && i >= 0 && i < cols)
                ans.push_back({top, i});
        right++;

        // iterate right col
        for (int j = top; j < bottom; j++)
            if (j >= 0 && j < rows && right - 1 < cols)
                ans.push_back({j, right - 1});
        bottom++;

        // iterate bottom row
        for (int k = right - 1; k >= left; k--)
            if (bottom - 1 < rows && k >= 0 && k < cols)
                ans.push_back({bottom - 1, k});
        left--;

        // iterate left col
        for (int l = bottom - 1; l >= top; l--)
            if (l >= 0 && l < rows && left >= 0)
                ans.push_back({l, left});
        top--;
    }

    return ans;
}