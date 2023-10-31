#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

TreeNode *buildTree(vector<int> &nums, int left, int right)
{
    if (left >= right)
        return nullptr;

    int rootIndex = left + (right - left) / 2;

    return new TreeNode{nums[rootIndex],
                        buildTree(nums, left, rootIndex),
                        buildTree(nums, rootIndex + 1, right)};
}

TreeNode *Solution::sortedArrayToBST(vector<int> &nums)
{
    return buildTree(nums, 0, nums.size());
}
