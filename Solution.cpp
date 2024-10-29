#include <iostream>
#include <algorithm>

#include "Solution"

int dfs(TreeNode *root, bool &ans) {
    if(!root) return 0;
    int left = dfs(root->left, ans),
        right = dfs(root->right, ans);
    if(abs(left - right) > 1) ans = false;
    return max(left, right) + 1;
}

bool Solution::isBalanced(TreeNode *root)
{
    bool ans = true;
    dfs(root, ans);
    return ans;
}