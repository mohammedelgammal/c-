#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution::romanToInt(string s)
{
    int totalSum = 0;

    unordered_map<char, int> roman;

    roman.insert({'I', 1});
    roman.insert({'V', 5});
    roman.insert({'X', 10});
    roman.insert({'L', 50});
    roman.insert({'C', 100});
    roman.insert({'D', 500});
    roman.insert({'M', 1000});

    for (int i = 0; i < s.size(); i++)
    {
        if (roman[s[i]] < roman[s[i + 1]])
        {
            totalSum += (roman[s[i + 1]] - roman[s[i]]);
            i++;
        }
        else
        {
            totalSum += roman[s[i]];
        }
    }

    return totalSum;
}