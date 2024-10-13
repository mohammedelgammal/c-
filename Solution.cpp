#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::reverseString(vector<char> &s)
{
    int l = 0, r = s.size() - 1;
    while(r > l) {
        char tmp = s[r];
        s[r--] = s[l];
        s[l++] = tmp;
    }
}