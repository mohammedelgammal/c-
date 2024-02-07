#include <iostream>
#include <algorithm>

#include "Solution"

int decode(int i, string &s)
{
    if (i >= s.size())
        return 1;
    if (s[i] == '0')
        return 0;
    if (i < s.size() - 1 && stoi(s.substr(i, 2)) <= 26)
        return decode(i + 1, s) + decode(i + 2, s);
    else
        return decode(i + 1, s);
}
int Solution::numDecodings(string s) { return decode(0, s); }