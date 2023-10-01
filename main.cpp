// Libraries
#include <iostream>

using namespace std;

#include "AVLTree"

int main()
{
    AVLTree tree{10};

    tree.insert(15);
    tree.insert(5);
    tree.insert(20);
    tree.insert(12);
    tree.insert(7);
    tree.insert(3);

    tree.levelOrderTreeTraverse();

    return 0;
}