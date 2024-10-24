#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode*> stack;
    while(root || !stack.empty()) {
        while(root) {
            ans.push_back(root->val);
            stack.push(root);
            root = root->left;
        }
        root = stack.top()->right;
        stack.pop();
    }
    return ans;
}