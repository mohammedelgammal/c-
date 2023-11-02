#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

uint32_t Solution::reverseBits(uint32_t n)
{
    uint32_t ans = 0;
    int size = 32, i = 0;

    while (i < size)
    {
        uint32_t bit = (n >> i) & 1;
        bit <<= (size - 1) - i++;
        ans |= bit;
    }

    return ans;
}