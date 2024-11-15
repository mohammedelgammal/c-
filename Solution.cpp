#include <iostream>
#include <algorithm>

#include "Solution"

void backtrack(TreeNode *root, string str, vector<string> &ans) {
    if(!root) return;
    str += to_string(root->val);
    if(!root->left && !root->right) 
        ans.push_back(str);
    str += "->";
    backtrack(root->left, str, ans);
    backtrack(root->right, str, ans);
}

vector<string> Solution::binaryTreePaths(TreeNode *root)
{
    vector<string> ans;
    backtrack(root, "", ans);
    return ans;
}