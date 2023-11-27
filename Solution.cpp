#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::rotate(vector<vector<int>> &matrix)
{
    int left = 0, top = left,
        right = matrix.size() - 1, bottom = right;

    while (left < right)
    {
        for (int i = 0; i < right - left; i++)
        {
            int topLeft = matrix[top][left + i];

            matrix[top][left + i] = matrix[bottom - i][left];
            matrix[bottom - i][left] = matrix[bottom][right - i];
            matrix[bottom][right - i] = matrix[top + i][right];
            matrix[top + i][right] = topLeft;
        }
        top++;
        left++;
        right--;
        bottom--;
    }
}