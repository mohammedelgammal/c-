#include <iostream>
#include <algorithm>

#include "Solution"

void traversePre(TreeNode *root, vector<int> &ans) {
    if(!root) return;
    ans.push_back(root->val);
    traversePre(root->left, ans);
    traversePre(root->right, ans);
}   

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    traversePre(root, ans);
    return ans;
}