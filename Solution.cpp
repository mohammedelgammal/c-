#include <iostream>

#include "Solution"

using namespace std;

void Solution::merge(vector<int> &first, int m, vector<int> &second, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (j >= 0)
    {
        if (i >= 0 && first[i] > second[j])
            first[k--] = first[i--];
        else
            first[k--] = second[j--];
    }
}