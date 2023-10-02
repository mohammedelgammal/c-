// Libraries
#include <iostream>

using namespace std;

#include "AVLTree"
#include "AVLTree.cpp"

int main()
{
    AVLTree tree{10};

    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(1);
    tree.insert(20);

    tree.levelOrderTreeTraverse();

    return 0;
}