#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode*> stack;
    while(root || !stack.empty()) {
        while(root) {
            stack.push(root);
            root = root->left;
        }
        ans.push_back(stack.top()->val);
        root = stack.top()->right;
        stack.pop();
    }
    return ans;
}