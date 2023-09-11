#include <iostream>
#include "LinkedList"

using namespace std;

int main()
{
    LinkedList list;

    list.addFirst(3);
    list.addLast(4);
    list.addLast(5);
    list.addLast(6);

    // list.reverse();

    const int kthFromEnd = list.getKthFromEnd(2);

    // vector<int>
    //     listArray = list.toArray();

    // for (int node : listArray)
    // {
    //     cout << node << endl;
    // }

    cout << kthFromEnd << endl;

    // cout << boolalpha << list.contains(5);

    // cout << list.indexOf(5) << endl;

    return 0;
}