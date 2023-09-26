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

    cout << root->value << ',';
    traversePreOrder(root->leftChildNode);
    traversePreOrder(root->rightChildNode);
}

void BinarySearchTree::traversePreOrder() const
{
    traversePreOrder(root);
}

void BinarySearchTree::traverseInOrder(Node *root) const
{
    if (root == nullptr)
        return;

    traverseInOrder(root->leftChildNode);
    cout << root->value << ',';

    traverseInOrder(root->rightChildNode);
}

void BinarySearchTree::traverseInOrder() const
{
    traverseInOrder(root);
}

void BinarySearchTree::traverseInReverseOrder(Node *root) const
{
    if (root == nullptr)
        return;

    traverseInReverseOrder(root->rightChildNode);
    cout << root->value << ',';

    traverseInReverseOrder(root->leftChildNode);
}

void BinarySearchTree::traverseInReverseOrder() const
{
    traverseInReverseOrder(root);
}

void BinarySearchTree::traversePostOrder(Node *root) const
{
    if (root == nullptr)
        return;

    traversePostOrder(root->leftChildNode);
    traversePostOrder(root->rightChildNode);
    cout << root->value << ',';
}

int max(const int numOne, const int numTwo)
{
    return numOne > numTwo ? numOne : numTwo;
}

void BinarySearchTree::traversePostOrder() const
{
    traversePostOrder(root);
}

int BinarySearchTree::getHeight(const Node *root) const
{
    if (root == nullptr)
        return -1;

    return max(getHeight(root->leftChildNode), getHeight(root->rightChildNode)) + 1;
}

int BinarySearchTree::getHeight() const
{
    return getHeight(root);
}