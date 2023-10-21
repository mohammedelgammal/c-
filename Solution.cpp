#include <iostream>
#include <set>

#include "Solution"

using namespace std;

string Solution::longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty() || strs[0].empty())
        return "";

    if (strs.size() == 1)
        return strs.front();

    int minMatches = 0, SPACE_CHAR = 32;
    string pivot = strs.front(),
           combined;

    for (int i = 1; i < strs.size(); i++)
        combined.append(strs[i] + " ");

    int k = 0,
        oldMin = INT_MAX,
        currentMin = 0;
    bool matches = true;

    for (int j = 0; j < combined.size(); j++)
    {
        if (combined[j] != SPACE_CHAR)
        {
            if (combined[j] == pivot[k++] && matches)
                currentMin++;
            else
                matches = false;
        }
        else
        {
            k = 0;
            oldMin = min(oldMin, currentMin);
            currentMin = 0;
            matches = true;
        }
    }

    string longestPrefix;

    for (int l = 0; l < oldMin; l++)
        longestPrefix += pivot[l];

    return longestPrefix;
}