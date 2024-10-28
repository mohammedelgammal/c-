#include <iostream>
#include <algorithm>

#include "Solution"

int getMax(TreeNode *root, int count)
{
    if (!root)
        return count;
    return max(getMax(root->left, count + 1),
               getMax(root->right, count + 1));
}

int Solution::maxDepth(TreeNode *root)
{
    return getMax(root, 0);
}