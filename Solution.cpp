#include <iostream>
#include <algorithm>

#include "Solution"

TreeNode *Solution::invertTree(TreeNode *root)
{
    TreeNode *ans = root;
    stack<pair<TreeNode*, bool>> stack;
    stack.push({root, false});
    while(!stack.empty()) {
        root = stack.top().first;
        bool isVisited = stack.top().second;
        stack.pop();
        if(root) {
            if(!isVisited) {
                stack.push({root->left, false});
                stack.push({root->right, false});
                stack.push({root, true});
            } else {
                swap(root->left, root->right);
            }
        }
    }
    return ans;
}