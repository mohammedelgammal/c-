#include <iostream>
#include <set>

#include "Solution"

using namespace std;

string Solution::longestCommonPrefix(vector<string> &strs)
{
    int minMatches = 0, SPACE_CHAR = 32;
    string pivot = strs.front(),
           whole;

    for (int i = 1; i < strs.size(); i++)
        whole += strs[i] + (i == strs.size() - 1 ? "" : " ");

    int k = 0, oldMin = INT_MAX, currentMin = 0;

    for (int j = 0; j < whole.size(); j++)
    {
        if (whole[j] != SPACE_CHAR)
        {
            if (whole[j] == pivot[k++])
            {
                currentMin++;
            }
        }
        else
        {
            k = 0;
            oldMin = min(oldMin, currentMin);
            currentMin = 0;
        }
    }

    string longestPrefix;

    for (int l = 0; l < oldMin; l++)
        longestPrefix += pivot[l];

    return longestPrefix;
}