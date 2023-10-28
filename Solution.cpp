#include <iostream>
#include <queue>

#include "Solution"

using namespace std;

void swapChildren(TreeNode *&root)
{
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

TreeNode *Solution::invertTree(TreeNode *root)
{
    if (root == nullptr)
        return nullptr;

    swapChildren(root);

    if (root->left != nullptr)
        invertTree(root->left);

    if (root->right != nullptr)
        invertTree(root->right);

    return root;
}
