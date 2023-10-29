#include <iostream>
#include <queue>

#include "Solution"

using namespace std;

int getDepth(TreeNode *root)
{
    int depth = 0;

    while (root->left)
    {
        depth++;
        root = root->left;
    }

    return depth;
}

bool nodeExists(TreeNode *root, const int index, const int depth)
{
    int left = 0,
        right = pow(2, depth) - 1;

    for (int i = 0; i < depth; i++)
    {
        int mid = left + (right - left) / 2;

        if (index > mid)
        {
            if (!root->right)
                return false;

            root = root->right;
            left = mid + 1;
        }
        else
        {
            if (!root->left)
                return false;

            root = root->left;
            right = mid;
        }
    }

    return true;
}

int Solution::countNodes(TreeNode *root)
{
    if (root == nullptr)
        return 0;

    int depth = getDepth(root);

    if (depth == 0)
        return 1;

    int left = 0,
        right = pow(2, depth) - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (!nodeExists(root, mid, depth))
            right = mid - 1;
        else
            left = left + 1;
    }

    return pow(2, depth) - 1 + left;
}
