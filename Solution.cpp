#include <iostream>
#include <unordered_set>
#include "Solution"

int Solution::maxProduct(vector<int> &nums)
{
    int l1 = 0, l2 = 0;
    for (int n : nums)
        if (n > l1)
            l2 = exchange(l1, n);
        else
            l2 = max(l2, n);
    return (l1 - 1) * (l2 - 1);
}