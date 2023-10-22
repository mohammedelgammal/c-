#include <iostream>
#include <set>

#include "Solution"

using namespace std;

string Solution::longestCommonPrefix(vector<string> &strs)
{
    string prefix;

    sort(strs.begin(), strs.end());

    string first = strs[0],
           last = strs[strs.size() - 1];
    int i = 0,
        j = 0,
        size = min(first.size(), last.size());

    while (i < size)
    {
        if (first[i] == last[j++])
            prefix += first[i++];
        else
            return prefix;
    }

    return prefix;
}