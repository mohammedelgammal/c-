#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int Solution::singleNumber(vector<int> &nums)
{
    int ans = 0;

    for (int n : nums)
        ans ^= n;

    return ans;
}