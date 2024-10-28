#include <iostream>
#include <algorithm>

#include "Solution"

int dfs(TreeNode *root, int &ans) {
    if(!root) return 0;
    int left = dfs(root->left, ans),
        right = dfs(root->right, ans);
    ans = max(left + right, ans);
    return max(left, right) + 1;
}

int Solution::diameterOfBinaryTree(TreeNode *root) {
    int ans = 0;
    dfs(root, ans);
    return ans;
}