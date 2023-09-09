#include <iostream>
#include "DoublyLinkedList"

using namespace std;

int main()
{
    DoublyLinkedList list;

    list.addFirst(2);
    list.addLast(3);
    list.addLast(5);
    list.addLast(7);
    list.addLast(9);
    list.addFirst(1);
    list.addLast(4);

    list.deleteLast();
    list.deleteLast();
    list.deleteLast();
    list.deleteFirst();

    vector<int>
        listArray = list.toArray();

    for (int node : listArray)
    {
        cout << node << endl;
    }

    cout << boolalpha << list.contains(5);

    // cout << list.indexOf(5) << endl;

    return 0;
}