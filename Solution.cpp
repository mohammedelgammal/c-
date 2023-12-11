#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::findSpecialInteger(vector<int> &arr)
{
    int size = arr.size(), l = 0, r = 0, len = 0;

    while (r < size)
    {
        if (arr[r] != arr[l])
        {
            if (len > size / 4)
                return arr[l];
            len = 0;
            l = r;
        }
        len++;
        r++;
    }
    return arr[l];
}