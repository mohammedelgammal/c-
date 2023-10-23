#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}