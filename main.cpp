#include <iostream>
#include "LinkedList"

using namespace std;

int main()
{
    LinkedList list;

    list.addFirst(2);
    list.addLast(3);
    list.addFirst(1);
    list.addLast(4);

    vector<int>
        listArray = list.toArray();

    for (int node : listArray)
    {
        cout << node << endl;
    }

    return 0;
}