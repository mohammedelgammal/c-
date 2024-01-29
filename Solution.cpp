#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::countSubstrings(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s.at(l) == s.at(r))
            (ans++, l--, r++);
        l = i - 1;
        r = i;
        while (l >= 0 && r < s.size() && s.at(l) == s.at(r))
            (ans++, l--, r++);
    }
    return ans;
}