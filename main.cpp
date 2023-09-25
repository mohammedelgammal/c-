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
    BinarySearchTree tree{7};

    tree.insert(4);
    tree.insert(9);
    tree.insert(1);
    tree.insert(6);
    tree.insert(8);
    tree.insert(10);

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

    // cout << factorial(5) << endl;

    return 0;
}