#include <iostream>
#include "Solution"

int Solution::findContentChildren(vector<int> &g, vector<int> &s)
{
    int max = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    for (int l = 0, r = 0; l < g.size() && r < s.size(); r++)
    {
        if (s[r] >= g[l])
        {
            max++;
            l++;
        }
    }
    return max;
}