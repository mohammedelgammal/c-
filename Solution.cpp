#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::lengthOfLastWord(string s)
{
    int l = s.size() - 1, ans = 0;
    while(s[l] == ' ') l--;
    while(l >= 0 && s[l] != ' ') {
        ans++;
        l--;
    }
    return ans;
}