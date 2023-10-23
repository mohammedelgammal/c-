#include <iostream>
#include <set>

#include "Solution"

using namespace std;

bool Solution::isAnagram(string s, string t)
{
    unordered_map<char, int> map1;

    if (s.length() != t.length())
        return false;

    for (int i = 0; i < s.size(); i++)
    {
        if (map1.contains(s[i]))
            map1[s[i]]++;
        else
            map1.insert({s[i], 1});
    }

    for (int j = 0; j < t.size(); j++)
    {
        if (!map1.contains(t[j]) || map1[t[j]] <= 0)
            return false;
        else
            map1[t[j]]--;
    }

    return true;
}