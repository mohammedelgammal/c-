#include <iostream>
#include "LinkedList"

using namespace std;

int main()
{
    LinkedList list;

    list.addFirst(3);
    list.addFirst(4);
    list.addFirst(5);
    list.addFirst(9);
    list.addFirst(2);
    list.addFirst(1);

    vector<int> listArray = list.toArray();

    for (int node : listArray)
    {
        cout << node << endl;
    }

    return 0;
}