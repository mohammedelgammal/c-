#include <iostream>
#include <algorithm>

#include "Solution"

bool Solution::isSameTree(TreeNode *p, TreeNode *q)
{
    if (!q || !p)
        return true;
    return p->val == q->val && isSameTree(q->left, p->left) && isSameTree(p->right, q->right);
}