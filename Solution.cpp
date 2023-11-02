#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::singleNumber(vector<int> &nums)
{
    int i = 0, size = nums.size();
    bitset<32> res;

    while (i < size)
    {
        bitset<32> current = nums[i++];
        res ^= current;
    }

    return res.to_ullong();
}