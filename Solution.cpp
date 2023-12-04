#include <iostream>
#include <algorithm>
#include "Solution"

vector<int> Solution::findAnagrams(string s, string p)
{
    const int sSize = s.size(), pSize = p.size(), COUNT = 26;
    if (sSize < pSize)
        return {};
    vector<int> ans;
    int pCount[COUNT] = {0},
        sCount[COUNT] = {0},
        left = 0,
        right = pSize - 1;
    for (int i = 0; i < pSize; i++)
    {
        pCount[p[i] - 'a']++;
        sCount[s[i] - 'a']++;
    }
    while (right < sSize)
    {
        bool isAnagram = true;
        for (int i = 0; i < COUNT; i++)
            if (sCount[i] != pCount[i])
                isAnagram = false;
        if (isAnagram)
            ans.push_back(left);
        if (++right < sSize)
            sCount[s[right] - 'a']++;
        sCount[s[left++] - 'a']--;
    }
    return ans;
}