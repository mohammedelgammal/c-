#include <iostream>
#include "LinkedList"

using namespace std;

int main()
{
    LinkedList list;

    // list.addFirst(2);
    // list.addLast(3);
    // list.addFirst(1);
    // list.addLast(4);

    // list.deleteFirst();
    // list.deleteLast();

    vector<int>
        listArray = list.toArray();

    // for (int node : listArray)
    // {
    //     cout << node << endl;
    // }

    cout << boolalpha << list.contains(1);

    return 0;
}