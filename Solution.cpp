#include <iostream>
#include <queue>

#include "Solution"

using namespace std;

int Solution::countNodes(TreeNode *root)
{
    if (root == nullptr)
        return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}
