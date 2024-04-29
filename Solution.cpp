#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isPalindrome(string s)
{
    string alpha;
    for (char ch : s)
        if (isalnum(ch))
            alpha += tolower(ch);
    int l = 0, r = alpha.size() - 1;
    while (r < alpha.size() && l != r)
        if (alpha[l++] != alpha[r--])
            return false;
    return true;
}