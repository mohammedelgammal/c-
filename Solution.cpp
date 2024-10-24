#include <iostream>
#include <algorithm>

#include "Solution"

void traverseIn(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;
    traverseIn(root->left, ans);
    ans.push_back(root->val);
    traverseIn(root->right, ans);
}

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    traverseIn(root, ans);
    return ans;
}