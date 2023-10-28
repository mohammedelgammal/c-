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

    queue<TreeNode *> queue;

    queue.push(root);

    while (!queue.empty())
    {
        TreeNode *&currentRoot = queue.front();

        if (currentRoot->left != currentRoot->right)
            swapChildren(currentRoot);

        if (currentRoot->left)
            queue.push(currentRoot->left);

        if (currentRoot->right)
            queue.push(currentRoot->right);

        queue.pop();
    }

    return root;
}
