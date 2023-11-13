#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

string Solution::reverseWords(string s)
{
    int size = s.size(), i = 0, right = 0, left = 0;
    reverse(s.begin(), s.end());
    while (i < size)
    {
        while (i < size && s[i] == ' ')
            i++;
        while (i < size && s[i] != ' ')
            s[right++] = s[i++];
        reverse(s.begin() + left, s.begin() + right);
        if (right != left)
            s[right++] = ' ';
        left = right;
    }
    s.resize(left - 1);
    return s;
}
