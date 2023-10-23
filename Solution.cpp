#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> arr(26, 0);
    int aASCII = 97;

    for (int i = 0; i < s.size(); i++)
        arr[s[i] - aASCII]++;

    for (int j = 0; j < t.size(); j++)
    {
        if (arr[t[j] - aASCII] <= 0)
            return false;

        arr[t[j] - aASCII]--;
    }

    return true;
}