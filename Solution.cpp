#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

vector<int> Solution::productExceptSelf(vector<int> &nums)
{
    int size = nums.size();
    vector<int> ans(size, 1);
    int prefix = 1;
    int postfix = 1;

    for (int i = 0; i < size; i++)
    {
        ans[i] *= prefix;
        prefix *= nums[i];
    }

    for (int j = size - 1; j >= 0; j--)
    {
        ans[j] *= postfix;
        postfix *= nums[j];
    }

    return ans;
}