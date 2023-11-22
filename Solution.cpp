#include <iostream>
#include <algorithm>

#include "Solution"

vector<vector<int>> Solution::spiralMatrixIV(int m, int n, ListNode *head)
{
    vector<vector<int>> ans(m, vector<int>(n, -1));
    int left = 0,
        top = 0,
        right = n,
        bottom = m;
    ListNode *current = head;

    while (left < right && top < bottom && current)
    {
        // iterate top row
        for (int i = left; i < right; i++)
        {
            if (!current)
                return ans;
            ans[top][i] = current->val;
            current = current->next;
        }
        top++;

        // iterate right col
        for (int j = top; j < bottom; j++)
        {
            if (!current)
                return ans;
            ans[j][right - 1] = current->val;
            current = current->next;
        }
        right--;

        // iterate bottom row
        for (int k = right - 1; k >= left && bottom != top; k--)
        {
            if (!current)
                return ans;
            ans[bottom - 1][k] = current->val;
            current = current->next;
        }
        bottom--;

        // iterate left col
        for (int l = bottom - 1; l >= top && left != right; l--)
        {
            ans[l][left] = current->val;
            current = current->next;
        }
        left++;
    }

    return ans;
}