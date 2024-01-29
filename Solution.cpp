#include <iostream>
#include <algorithm>

#include "Solution"

string Solution::longestPalindrome(string s)
{
    int maxLen = 0;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        int l = i, r = i;
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
        l = i - 1;
        r = i;
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
    return ans;
}
