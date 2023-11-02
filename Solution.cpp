#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::hammingWeight(uint32_t n)
{
    int size = 32, i = 0, weight = 0;

    while (i < size)
        if ((n >> i++ & 1) == 1)
            weight++;

    return weight;
}