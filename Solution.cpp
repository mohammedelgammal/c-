#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

void inOrder(const TreeNode *root, int &ans, int &prev)
{
    if (root->left)
        inOrder(root->left, ans, prev);

    ans = min(ans, abs(root->val - prev));
    prev = root->val;

    if (root->left)
        inOrder(root->left, ans, prev);
}

int Solution::minDiffInBST(TreeNode *root)
{
    int ans = INT_MAX, prev = INT_MAX;

    inOrder(root, ans, prev);

    return ans;
}
