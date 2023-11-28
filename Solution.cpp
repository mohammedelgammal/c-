#include <iostream>

#include "Solution"

void Solution::gameOfLife(vector<vector<int>> &board)
{
    int rows = board.size(),
        cols = board[0].size();
    vector<vector<int>> ans = board;

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
        {
            int ln = 0;
            for (int i = r - 1; i <= r + 1; i++)
                for (int j = c - 1; j <= c + 1; j++)
                {
                    if (i < 0 || i >= rows || j < 0 || j >= cols ||
                        (i == r && j == c))
                        continue;
                    if (board[i][j] == 1)
                        ln++;
                }
            if (board[r][c] == 0 && ln == 3)
                ans[r][c] = 1;
            if (board[r][c] == 1 && (ln < 2 || ln > 3))
                ans[r][c] = 0;
        }
    board = ans;
}