#include "AVLTree"

#include "BinarySearchTree"

AVLTree::AVLTree(const int value) : BinarySearchTree(value) {}

void AVLTree::insert(const int value, const Node *root)
{
    Node *newNode = new Node{value};

    if (root == nullptr)
    {
        root = newNode;
        return;
    }
    if (value > root->value)
        insert(value, root->rightChildNode);

    if (value < root->value)
        insert(value, root->leftChildNode);
}

void AVLTree::insert(const int value)
{
    insert(value, this->root);
}
