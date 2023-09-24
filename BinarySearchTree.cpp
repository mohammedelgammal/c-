#include "BinarySearchTree"

BinarySearchTree::BinarySearchTree(const int value) : root{new Node{value}}
{
}

BinarySearchTree::~BinarySearchTree()
{
    delete root;
    root = nullptr;
}

