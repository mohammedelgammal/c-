#include "BinarySearchTree"
#include <iostream>

using std::cout, std::endl;

BinarySearchTree::BinarySearchTree(const int value) : root{new Node{value}}
{
}

BinarySearchTree::~BinarySearchTree()
{
    delete root;
    root = nullptr;
}

void BinarySearchTree::insert(const int value)
{
    Node *newNode = new Node{value};
    Node *currentNode = root;

    while (currentNode)
    {
        if (newNode->value > currentNode->value)
        {
            if (currentNode->rightChildNode == nullptr)
            {
                currentNode->rightChildNode = newNode;
                newNode->parentNode = currentNode;
                return;
            }
            currentNode = currentNode->rightChildNode;
        }
        if (newNode->value < currentNode->value)
        {
            if (currentNode->leftChildNode == nullptr)
            {
                currentNode->leftChildNode = newNode;
                newNode->parentNode = currentNode;
                return;
            }
            currentNode = currentNode->leftChildNode;
        }
    }

    delete currentNode;
    delete newNode;
    currentNode = newNode = nullptr;
}

bool BinarySearchTree::find(const int value) const
{
    Node *currentNode = root;

    while (currentNode)
    {
        if (value == currentNode->value)
            return true;
        if (value > currentNode->value)
        {
            currentNode = currentNode->rightChildNode;
        }
        else
        {
            currentNode = currentNode->leftChildNode;
        }
    }

    return false;
}

void BinarySearchTree::traversePreOrder(const Node *root) const
{
    if (root == nullptr)
        return;

    cout << root->value << endl;
    traversePreOrder(root->leftChildNode);
    traversePreOrder(root->rightChildNode);
}

void BinarySearchTree::traversePreOrder() const
{
    traversePreOrder(root);
}