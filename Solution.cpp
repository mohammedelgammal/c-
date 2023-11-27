#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::setZeroes(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans = matrix;
    int rows = matrix.size(),
        cols = matrix[0].size();

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            if (matrix[r][c] == 0)
            {
                for (int row = 0; row < rows; row++)
                    ans[row][c] = 0;
                for (int col = 0; col < cols; col++)
                    ans[r][col] = 0;
            }
    matrix = ans;
}