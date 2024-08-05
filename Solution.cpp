#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::checkInclusion(string s1, string s2)
{
    if(s1.size() > s2.size()) return false;
    unordered_map<char, int> map1, map2;
    for(int i = 0; i < s1.size(); i++) 
        map1[s1[i]]++, map2[s2[i]]++;
    int l = 0, r = s1.size() - 1;
    while(r < s2.size()) {
        if(map1 == map2) return true;
        map2[s2[l]]--;
        if(!map2[s2[l]]) map2.erase(s2[l]);
        l++;
        r++;
        map2[s2[r]]++;
    }
    return false;
}