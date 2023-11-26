#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    for (int rotations = 0, size = mat.size(); rotations < 3 && target != mat; rotations++)
    {
        for (int row = 0; row < size; row++)
            for (int col = row + 1; col < size; col++)
                swap(mat[row][col], mat[col][row]);

        for (int row = 0; row < size; row++)
            reverse(mat[row].begin(), mat[row].end());
    }

    return mat == target;
}