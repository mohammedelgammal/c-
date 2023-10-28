#include <iostream>
#include <queue>

#include "Solution"

using namespace std;

bool isMirror(TreeNode *left, TreeNode *right)
{
    if (!left && !right)
        return true;

    if (!left || !right)
        return false;

    return left->val == right->val &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool Solution::isSymmetric(TreeNode *root)
{
    if (!root)
        return true;

    return isMirror(root->left, root->right);
}
