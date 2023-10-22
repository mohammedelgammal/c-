#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::isPalindrome(string s)
{
    int start = 0, end = s.size() - 1;

    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start++]) != tolower(s[end--]))
            return false;
    }

    return true;
}