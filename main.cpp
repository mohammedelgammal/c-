// Libraries
#include <iostream>

using namespace std;

#include "BinarySearchTree"

int factorial(const int num)
{
    if (num == 0)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    BinarySearchTree tree{5};
    // BinarySearchTree *otherTree = new BinarySearchTree{5};

    tree.insert(3);
    tree.insert(8);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(9);
    tree.insert(1);
    tree.insert(7);

    // otherTree->insert(20);
    // otherTree->insert(48);
    // otherTree->insert(2);
    // otherTree->insert(4);
    // otherTree->insert(6);
    // otherTree->insert(9);
    // otherTree->insert(1);
    // otherTree->insert(7);

    // cout << boolalpha << tree.find(7) << endl
    //      << tree.find(9) << endl
    //      << tree.find(5) << endl
    //      << tree.find(4) << endl
    //      << tree.find(10) << endl
    //      << tree.find(13) << endl;

    tree.traversePreOrder();

    cout << endl;

    tree.traverseInOrder();

    cout << endl;

    tree.traversePostOrder();

    cout << endl;

    tree.traverseInReverseOrder();

    // cout << factorial(5) << endl;

    cout << endl;

    cout << tree.getHeight();

    cout << endl;

    cout << tree.getMinimum();

    cout << endl;

    cout << tree.getMinimumUnordered();

    cout << endl;

    // cout << boolalpha << tree.isIdentical(otherTree);

    // cout << endl;

    // tree.swapRoot();
    cout << boolalpha << tree.isBinarySearchTree();

    cout << endl;

    tree.getKthNode(3);

    return 0;
}