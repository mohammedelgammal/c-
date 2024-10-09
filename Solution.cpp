#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isSubsequence(string s, string t)
{
    int l = 0, r = 0;
    while(l < s.size() && r < t.size()) {
        if(s[l] == t[r]) l++;
        r++;
    }
    return l >= s.size();
}