#include <iostream>

#include "Solution"

vector<vector<string>> Solution::groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> map;

    for (string str : strs)
    {
        string original = str;
        sort(str.begin(), str.end());
        map[str].push_back(original);
    }

    for (const unordered_map<string, vector<string>>::iterator::value_type it : map)
        ans.push_back(it.second);

    return ans;
}