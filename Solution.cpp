#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution ::lengthOfLastWord(string s)
{
    int j = s.size() - 1;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 32)
        {
            if (i != j)
                return j - i;
            j--;
        }
    }

    return j + 1;
}
