#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int Solution::strStr(string haystack, string needle)
{
    int partitionSize = needle.size();

    for (int i = 0; i <= haystack.size() - partitionSize; i++)
    {
        string subStr{haystack.begin() + i,
                      haystack.begin() + i + partitionSize};
        if (subStr == needle)
            return i;
    }
    return -1;
}