// Libraries
#include <iostream>

// Data Structures
#include "QueueStack"
#include "QueueStack.cpp"

using namespace std;

int main()
{
    QueueStack<int> queue;

    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    for (int i = 0; i < queue.getLength(); i++)
        cout << queue[i] << endl;

    return 0;
}