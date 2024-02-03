#include <iostream>
#include <algorithm>

#include "Solution"

int decode(int start, int end, string &s)
{
    int len = end - start + 1;
    return decode(start + 1, end + 1, s) +
           decode(start + 1, end + 2, s);
}
int Solution::numDecodings(string s) { return decode(0, 0, s); }