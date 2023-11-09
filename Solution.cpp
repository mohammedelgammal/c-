#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::hIndex(vector<int> &citations)
{
    int size = citations.size(),
        hIndex = 0;

    sort(citations.begin(), citations.end());

    for (int i = 0; i < size; i++)
    {
        hIndex = size - i;
        if (hIndex <= citations[i])
            return hIndex;
    }

    return 0;
}