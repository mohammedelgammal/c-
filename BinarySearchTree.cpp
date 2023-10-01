#include "BinarySearchTree"
#include <iostream>

#include <stddef.h>

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
                newNode->parentNode = currentNode;
                currentNode->rightChildNode = newNode;
                return;
            }
            currentNode = currentNode->rightChildNode;
        }
        if (newNode->value < currentNode->value)
        {
            if (currentNode->leftChildNode == nullptr)
            {
                newNode->parentNode = currentNode;
                currentNode->leftChildNode = newNode;
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

    if (root->rightChildNode == nullptr && root->leftChildNode == nullptr)
        return 0;

    return (max(getHeight(root->leftChildNode), getHeight(root->rightChildNode)) + 1);
}

int BinarySearchTree::getHeight() const
{
    return getHeight(root);
}

int BinarySearchTree::getMinimum(const Node *root) const
{
    if (root->leftChildNode == nullptr)
        return root->value;

    return getMinimum(root->leftChildNode);
}

int BinarySearchTree::getMinimum() const
{
    return getMinimum(root);
}

int min(const int numOne, const int numTwo)
{
    return numOne < numTwo ? numOne : numTwo;
}

int BinarySearchTree::getMinimumUnordered(const Node *root) const
{
    if (root == nullptr)
        return INT_MAX;

    return min(
        min(getMinimumUnordered(root->leftChildNode),
            getMinimumUnordered(root->rightChildNode)),
        root->value);
}

int BinarySearchTree::getMinimumUnordered() const
{
    return getMinimumUnordered(root);
}

bool BinarySearchTree::isIdentical(const Node *originalRoot, const Node *otherRoot) const
{
    if (originalRoot == nullptr && otherRoot == nullptr)
        return true;

    if (originalRoot != nullptr && otherRoot != nullptr)
        return originalRoot->value == otherRoot->value &&
               isIdentical(originalRoot->leftChildNode, otherRoot->leftChildNode) &&
               isIdentical(originalRoot->rightChildNode, otherRoot->rightChildNode);

    return false;
}

bool BinarySearchTree::isIdentical(const BinarySearchTree *tree) const
{
    return isIdentical(root, tree->root);
}

bool BinarySearchTree::validateNode(const Node *root, int min, int max) const
{
    if (root == nullptr)
        return true;

    if (root->value < min || root->value > max)
        return false;

    return validateNode(root->leftChildNode, INT_MIN, root->value - 1) &&
           validateNode(root->rightChildNode, root->value + 1, INT_MAX);
}

bool BinarySearchTree::isBinarySearchTree() const
{
    return validateNode(root, INT_MIN, INT_MAX);
}

void BinarySearchTree::swapRoot()
{
    Node *oldRoot = root;
    root = root->leftChildNode;
    root->leftChildNode = oldRoot;
}

void BinarySearchTree::getKthNode(const Node *root, const int kth) const
{
    if (root == nullptr)
        return;

    if (kth == 0)
    {
        cout << "value: " << root->value << '|';
        cout << "height: " << root->height << ", ";
        return;
    }

    getKthNode(root->leftChildNode, kth - 1);
    getKthNode(root->rightChildNode, kth - 1);
}

void BinarySearchTree::getKthNode(const int kth) const
{
    getKthNode(root, kth);
    cout << endl;
}

void BinarySearchTree::levelOrderTreeTraverse() const
{
    for (int i = 0; i <= getHeight(); i++)
        getKthNode(i);
}