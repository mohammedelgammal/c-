#include <iostream>
#include <algorithm>

#include "Solution"

void getLongest(int l, int r, int &maxLen, string &ans, string s)
{
    while (l >= 0 && r < s.size() && s.at(l) == s.at(r))
    {
        int currentLen = r - l + 1;
        if (currentLen > maxLen)
        {
            maxLen = currentLen;
            ans = s.substr(l, currentLen);
        }
        l--;
        r++;
    }
}

string Solution::longestPalindrome(string s)
{
    int maxLen = 0;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        getLongest(i, i, maxLen, ans, s);
        getLongest(i - 1, i, maxLen, ans, s);
    }
    return ans;
}
