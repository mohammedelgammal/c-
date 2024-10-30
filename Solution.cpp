#include <iostream>
#include <algorithm>

#include "Solution"

TreeNode *dfs(int l, int r, vector<int> &nums) {
    if(l > r) return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(l, mid - 1, nums);
    root->right = dfs(mid + 1, r, nums);
    return root;
}

TreeNode *Solution::sortedArrayToBST(vector<int> &nums)
{
    return dfs(0, nums.size() - 1, nums);
}