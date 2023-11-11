#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

vector<int> Solution::productExceptSelf(vector<int> &nums)
{
    int size = nums.size();
    vector<int> prefix(size, 0),
        postfix(size, 0),
        ans(size, 0);

    for (int i = 0; i < size; i++)
    {
        int prev = 1;
        if (i > 0)
            prev = prefix[i - 1];
        prefix[i] = nums[i] * prev;
    }

    for (int j = size - 1; j >= 0; j--)
    {
        int prev = 1;
        if (j < size - 1)
            prev = postfix[j + 1];
        postfix[j] = nums[j] * prev;
    }

    for (int k = 0; k < size; k++)
    {
        int postPrev = 1, prePrev = 1;
        if (k > 0)
            prePrev = prefix[k - 1];
        if (k < size - 1)
            postPrev = postfix[k + 1];
        ans[k] = postPrev * prePrev;
    }

    return ans;
}