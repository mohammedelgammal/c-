#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int getCharIndex(const char character)
{
    return character - 97;
}

bool Solution::canConstruct(string ransomNote, string magazine)
{
    vector<int> ascii;

    ascii.assign(26, 0);

    if (ransomNote.size() < magazine.size())
        return false;

    for (int i = 0; i < magazine.size(); i++)
        ascii[getCharIndex(magazine[i])]++;

    for (int j = 0; j < ransomNote.size(); j++)
    {
        int &repititions = ascii[getCharIndex(ransomNote[j])];

        if (repititions == 0)
            return false;
        else
            repititions--;
    }

    return true;
}