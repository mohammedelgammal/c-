#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::rotate(vector<vector<int>> &matrix)
{
    int size = matrix.size();

    for (int row = 0; row < size; row++)
        for (int col = row + 1; col < size; col++)
            swap(matrix[row][col], matrix[col][row]);

    for (int row = 0; row < size; row++)
        reverse(matrix[row].begin(), matrix[row].end());
}