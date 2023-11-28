#include <iostream>

#include "Solution"

void Solution::gameOfLife(vector<vector<int>> &board)
{
    int rows = board.size(),
        cols = board[0].size();

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
        {
            int ln = 0;
            for (int i = r - 1; i <= r + 1; i++)
                for (int j = c - 1; j <= c + 1; j++)
                {
                    if (i < 0 || j < 0 || i >= rows || j >= cols ||
                        (i == r && j == c))
                        continue;
                    if (board[i][j] == 1 || board[i][j] == 3)
                        ln++;
                }
            if (board[r][c] == 0 && ln == 3)
                board[r][c] = 2;
            if (board[r][c] == 1 && (ln < 2 || ln > 3))
                board[r][c] = 3;
        }
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
        {
            if (board[r][c] == 3)
                board[r][c] = 0;
            if (board[r][c] == 2)
                board[r][c] = 1;
        }
}