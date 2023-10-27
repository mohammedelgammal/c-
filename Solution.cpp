#include <iostream>

#include "Solution"

using namespace std;

bool Solution::isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p || !q)
        return p == q;
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
