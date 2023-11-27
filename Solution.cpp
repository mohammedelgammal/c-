#include <iostream>
#include <set>

#include "Solution"

void Solution::setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size(),
        cols = matrix[0].size();
    set<int> rs, cs;

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            if (matrix[r][c] == 0)
            {
                rs.insert(r);
                cs.insert(c);
            }
    for (int r : rs)
        for (int c = 0; c < cols; c++)
            matrix[r][c] = 0;
    for (int c : cs)
        for (int r = 0; r < rows; r++)
            matrix[r][c] = 0;
}