#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int top = 0,
        left = 0,
        right = matrix[0].size(),
        bottom = matrix.size();

    while (left < right && top < bottom)
    {
        // iterating top row
        for(int i = left; i < right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        // iterating right col
        for(int j = top; j < bottom; j++)
            ans.push_back(matrix[j][right - 1]);
        right--;

        // iterating bottom row
        for(int k = right - 1; k >= left && bottom != top; k--)
            ans.push_back(matrix[bottom - 1][k]);
        bottom--;

        // iterating left col
        for(int l = bottom - 1; l >= top && left != right; l--)
            ans.push_back(matrix[l][left]);
        left++;
    }
    
    return ans;
}