#include <iostream>
#include <algorithm>

#include "Solution"

vector<int> Solution::postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    stack<pair<TreeNode*, bool>> stack;
    stack.push({root, false});
    while(!stack.empty()) {
        root = stack.top().first;
        bool isVisited = stack.top().second;
        stack.pop();
        if(root) {
            if(!isVisited) {
                stack.push({root, true});
                stack.push({root->right, false});
                stack.push({root->left, false});
            } else {
                ans.push_back(root->val);
            }
        }
    }
    return ans;
}