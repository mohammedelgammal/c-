#include <iostream>
#include <unordered_set>
#include "Solution"

int findLeftMostIdx(const vector<int> &arr, const int n)
{
    int l = 0, r = arr.size() - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] >= n)
            r = m - 1;
        else
            l = m + 1;
    }

    return l;
}

int Solution::findSpecialInteger(vector<int> &arr)
{
    // using binary search
    int size = arr.size();
    for (int idx : {size / 4, size / 2, size * 3 / 4})
        if (arr[findLeftMostIdx(arr, arr[idx]) + size / 4] == arr[idx])
            return arr[idx];
    return -1;
}