#include <iostream>
#include <algorithm>

#include "Solution"

string Solution::mergeAlternately(string word1, string word2)
{
    string ans;
    int l = 0, r = 0, n1 = word1.size(), n2 = word2.size();
    while(l < n1 || r < n2) {
        if(l < n1) ans += word1[l++];
        if(r < n2) ans += word2[r++];
    }
    return ans;
}