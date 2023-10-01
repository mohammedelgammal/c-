#include "AVLTree"

#include "BinarySearchTree"

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
    {
        node->rightChildNode = insert(value, node->rightChildNode);
    }
    if (value < node->value)
    {
        node->leftChildNode = insert(value, node->leftChildNode);
    }

    node->height = getHeight(node);

    return node;
}

void AVLTree::insert(const int value)
{
    root = insert(value, root);
}
