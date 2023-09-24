// Libraries
#include <iostream>

using namespace std;

#include "BinarySearchTree"

int main()
{
    BinarySearchTree tree{10};

    tree.insert(7);
    tree.insert(9);
    tree.insert(5);
    tree.insert(4);
    tree.insert(6);

    cout << boolalpha << tree.find(7) << endl
         << tree.find(9) << endl
         << tree.find(5) << endl
         << tree.find(4) << endl
         << tree.find(10) << endl
         << tree.find(13) << endl;

    return 0;
}