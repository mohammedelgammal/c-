#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::isSubsequence(string s, string t)
{
    int j = 0;

    for (int i = 0; i < t.size(); i++)
        if (t[i] == s[j])
            j++;

    return j == s.size();
}