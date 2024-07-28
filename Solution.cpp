#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::characterReplacement(string s, int k)
{
    unordered_map<char, int> count;
    int l = 0, r = 0, ans = 0;
    while(r < s.size()) {
        int freq = 0;
        count[s[r]]++;
        for(const auto& it : count) freq = max(it.second, freq);
        while(r - l + 1 - freq > k) {
            count[s[l]]--;
            l--;
        }
        ans = max(r - l + 1, ans);
        r++;
    }
    return ans;
}