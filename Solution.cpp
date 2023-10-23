#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::wordPattern(string pattern, string s)
{
    unordered_map<char, int> map1;
    unordered_map<string, int> map2;

    istringstream iss(s);
    int i = 0;

    for (string token; iss >> token; i++)
    {
        if (!map1.contains(pattern[i]))
            map1.insert({pattern[i], i});
        if (!map2.contains(token))
            map2.insert({token, i});

        if (i == pattern.size() || map1[pattern[i]] != map2[token])
            return false;
    }

    if (i <= pattern.size() - 1)
        return false;

    return true;
}