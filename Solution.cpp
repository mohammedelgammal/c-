#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::findSpecialInteger(vector<int> &arr)
{
    int size = arr.size();
    unordered_map<int, int> map;

    for (int i = 0; i < size; i++)
        map[arr[i]]++;
    for (auto it : map)
        if (it.second > size / 4)
            return it.first;
    return -1;
}