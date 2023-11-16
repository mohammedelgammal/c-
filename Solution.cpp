#include <iostream>
#include <set>

#include "Solution"

int Solution::lengthOfLongestSubstring(string s)
{
    set<char> set;
    int size = s.size(), left = 0, right = 0,
        len = 0;

    if (size < 2)
        return size;

    while (right < size)
    {
        while (set.count(s[right]))
        {
            len = max(len, right - left);
            set.erase(s[left++]);
        }
        set.insert(s[right++]);
    }

    return max(len, right - left);
}