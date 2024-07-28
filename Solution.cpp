#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::lengthOfLongestSubstring(string s)
{
    int l = 0, r = 0, ans = 0;
    set<char> set;
    while(r < s.size()) {
        while(set.contains(s[r])) set.erase(s[l++]);
        ans = max(r - l + 1, ans);
        set.insert(s[r++]);
    }
    return ans;
}