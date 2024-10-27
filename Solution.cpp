#include <iostream>
#include <algorithm>

#include "Solution"

void invert(TreeNode *root)
{
    if (!root)
        return;
    swap(root->left, root->right);
    invert(root->left);
    invert(root->right);
}

TreeNode *Solution::invertTree(TreeNode *root)
{
    TreeNode *curr = root;
    invert(root);
    return curr;
}