#include <iostream>
#include <algorithm>

#include "Solution"

bool isSameTree(TreeNode *p, TreeNode* q) {
    if(!p || !q) return p == q;
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

bool Solution::isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if(!root) return false;
    return isSameTree(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}