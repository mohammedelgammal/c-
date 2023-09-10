#include <iostream>
#include "DoublyLinkedList"

using namespace std;

int main()
{
    DoublyLinkedList list;

    list.addFirst(3);
    list.addLast(4);
    list.addLast(5);
    list.addLast(6);

    list.reverse();

    vector<int>
        listArray = list.toArray();

    for (int node : listArray)
    {
        cout << node << endl;
    }

    // cout << boolalpha << list.contains(5);

    // cout << list.indexOf(5) << endl;

    return 0;
}