#include "AVLTree"
#include "BinarySearchTree"

#include <iostream>

using std::cout, std::endl;

AVLTree::AVLTree(const int value) : BinarySearchTree(value) {}

Node *AVLTree::insert(const int value, Node *node)
{
    if (node == nullptr)
    {
        node = new Node(value);
        node->height = getHeight(node);
        return node;
    }
    if (value > node->value)
        node->rightChildNode = insert(value, node->rightChildNode);

    if (value < node->value)
        node->leftChildNode = insert(value, node->leftChildNode);

    node->height = getHeight(node);

    if (isLeftHeavy())
        cout << "is left heavy" << endl;

    if (isRightHeavy())
        cout << "is right heavy" << endl;

    return node;
}

void AVLTree::insert(const int value)
{
    root = insert(value, root);
}

int AVLTree::getBalanceFactor(const Node *root) const
{
    return getHeight(root->leftChildNode) - getHeight(root->rightChildNode);
}

bool AVLTree::isLeftHeavy() const
{
    return getBalanceFactor(root) > 1;
}

bool AVLTree::isRightHeavy() const
{
    return getBalanceFactor(root) < -1;
}