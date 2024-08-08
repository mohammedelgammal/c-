#include <iostream>
#include <algorithm>

#include "Solution"

string Solution::minWindow(string s, string t)
{
    unordered_map<char, int> window, mapt;
    for(char ch : t) mapt[ch]++;
    int l = 0, r = 0, start = 0, len = INT_MAX, have = 0, need = mapt.size();
    while(r < s.size()) {
        window[s[r]]++;
        if(window[s[r]] == mapt[s[r]]) have++;
        while(have == need) {
            int currLen = r - l + 1;
            if(currLen < len) {
                len = currLen;
                start = l;
            }
            window[s[l]]--;
            if(window[s[l]] < mapt[s[l]]) have--;
            l++;
        }
        r++;
    }
    return len < INT_MAX ? s.substr(start, len) : "";
}