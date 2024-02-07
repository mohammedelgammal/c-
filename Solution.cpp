#include <iostream>
#include <algorithm>

#include "Solution"

int decode(int i, string &s, unordered_map<int, int> &memo)
{
    if (memo.contains(i))
        return memo[i];
    if (i >= s.size())
        return 1;
    if (s[i] == '0')
        return 0;
    if (i < s.size() - 1 && stoi(s.substr(i, 2)) <= 26)
        memo[i] = decode(i + 1, s, memo) + decode(i + 2, s, memo);
    else
        memo[i] = decode(i + 1, s, memo);
    return memo[i];
}
int Solution::numDecodings(string s)
{
    unordered_map<int, int> memo;
    return decode(0, s, memo);
}