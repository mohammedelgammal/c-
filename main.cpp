// Libraries
#include <iostream>

// Data Structures
#include "Queue"
#include "Queue.cpp"

using namespace std;

int main()
{
    Queue<int> queue;

    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    queue.reverse();

    for (int i = 0; i < queue.getLength(); i++)
        cout << queue[i] << endl;

    return 0;
}