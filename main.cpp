// Libraries
#include <iostream>

using namespace std;

#include "AVLTree"

int main()
{
    AVLTree tree{10};

    tree.insert(20);
    tree.insert(30);

    tree.traverseInOrder();

    return 0;
}