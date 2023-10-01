// Libraries
#include <iostream>

using namespace std;

#include "AVLTree"

int main()
{
    AVLTree tree{10};

    tree.insert(15);
    tree.insert(5);

    tree.levelOrderTreeTraverse();

    return 0;
}