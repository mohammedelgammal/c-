#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::generateMatrix(int n)
{
    vector<vector<int>> ans(n, vector<int>(n, 0));
    int num = 1,
        left = 0, top = 0,
        right = n, bottom = n;

    while (left < right && top < bottom)
    {
        for (int i = left; i < right; i++)
            ans[top][i] = num++;
        top++;

        for (int j = top; j < bottom; j++)
            ans[j][right - 1] = num++;
        right--;

        for (int k = right - 1; k >= left; k--)
            ans[bottom - 1][k] = num++;
        bottom--;

        for (int l = bottom - 1; l >= top; l--)
            ans[l][left] = num++;
        left++;
    }

    return ans;
}