// Libraries
#include <iostream>

// Data Structures
#include "QueueLinkedList"
#include "QueueLinkedList.cpp"

using namespace std;

int main()
{
    QueueLinkedList<int> queue;

    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    // queue.dequeue();
    // queue.dequeue();
    // queue.dequeue();
    // queue.dequeue();

    // cout << queue.getBottom() << endl;
    // cout << queue.getPeak() << endl;
    // cout << queue.getLength() << endl;
    // cout << boolalpha << queue.isEmpty() << endl;

    for (int i = 0; i < queue.getLength(); i++)
        cout << queue[i] << endl;

    return 0;
}