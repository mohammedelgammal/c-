#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int getCharIndex(const char character)
{
    return character - 97;
}

bool Solution::isIsomorphic(string s, string t)
{
    unordered_map<char, char> map;
    set<int> set;

    if (s.size() != t.size())
        return false;

    for (int i = 0; i < s.size(); i++)
    {
        if (map.contains(s[i]))
        {
            if (map.find(s[i])->second != t[i])
                return false;
        }
        else
        {
            if (set.contains(t[i]))
                return false;

            set.insert(t[i]);
            map.insert({s[i], t[i]});
        }
    }

    return true;
}