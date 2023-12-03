#include <iostream>

#include "Solution"

vector<int> Solution::findAnagrams(string s, string p)
{
    vector<int> ans;
    int left = 0, right = p.size() - 1;

    while (right < s.size())
    {
        bool isAnagram = true;
        int count[26] = {0};
        for (int i = left; i < right + 1; i++)
            count[s[i] - 'a']++;
        for (char c : p)
            count[c - 'a']--;
        for (int n : count)
            if (n)
                isAnagram = false;
        if (isAnagram)
            ans.push_back(left);
        left++;
        right++;
    }
    return ans;
}