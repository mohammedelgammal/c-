#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::set(string key, string value, int timestamp)
{
    map[key].push_back({value, timestamp});
}

string Solution::get(string key, int timestamp)
{
    string ans;
    int l = 0, r = map[key].size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (map[key][m].second <= timestamp)
        {
            ans = map[key][m].first;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return ans;
}
