#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isValidSudoku(vector<vector<char>> &board)
{
    bool rows[9][9] = {false},
         cols[9][9] = {false},
         boxes[9][9] = {false};

    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (board[row][col] == '.')
                continue;

            int currentNumIndex = board[row][col] - '0' - 1,
                boxIndex = row / 3 * 3 + col / 3;

            if (rows[row][currentNumIndex] || cols[col][currentNumIndex] || boxes[boxIndex][currentNumIndex])
                return false;

            rows[row][currentNumIndex] = cols[col][currentNumIndex] = boxes[boxIndex][currentNumIndex] = true;
        }
    }

    return true;
}