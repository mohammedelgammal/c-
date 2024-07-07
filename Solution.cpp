#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size(), t = 0, b = m - 1, row = 0;
    while(t <= b) {
        row = t + (b - t) / 2;
        if(matrix[row][0] > target) b = row - 1;
        else if(matrix[row][n - 1] < target) t = row + 1;
        else break;
    }
    int l = 0, r = n - 1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(matrix[row][mid] == target) return true;
        else if(matrix[row][mid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}