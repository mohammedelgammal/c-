#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution::strStr(string haystack, string needle)
{
    int partitionSize = needle.size(),
        range = haystack.size() - needle.size();

    for (int i = 0; i <= range; i++)
    {
        string partition{haystack.begin() + i,
                         haystack.begin() + i + partitionSize};
        if (partition == needle)
            return i;
    }

    return -1;
}