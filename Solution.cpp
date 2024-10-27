#include <iostream>
#include <algorithm>

#include "Solution"

TreeNode *Solution::invertTree(TreeNode *root)
{
    TreeNode *ans = root;
    stack<TreeNode*> stack;
    while(!stack.empty() || root) {
        while(root) {
            swap(root->left, root->right);
            stack.push(root);
            root = root->left;
        }
        root = stack.top()->right;
        stack.pop();
    }
    return ans;
}