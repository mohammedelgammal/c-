#include <iostream>
#include <queue>

#include "Solution"

using namespace std;

bool Solution::hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
        return false;

    if (root->val == targetSum && !root->right && !root->left)
        return true;

    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}
