#include <iostream>
#include <algorithm>

#include "Solution"

void countIt(int l, int r, int &ans, string &s)
{
    while (l >= 0 && r < s.size() && s.at(l) == s.at(r))
        (ans++, l--, r++);
}

int Solution::countSubstrings(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        countIt(i, i, ans, s);
        countIt(i - 1, i, ans, s);
    }
    return ans;
}