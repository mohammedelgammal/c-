#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::findSpecialInteger(vector<int> &arr)
{
    int size = arr.size();

    for(int i = 0; i < size - size / 4; i++)
        if(arr[i] == arr[i + size / 4])
            return arr[i];
    return -1;
}