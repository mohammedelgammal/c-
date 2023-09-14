// Libraries
#include <iostream>

// Data Structures
#include "PriorityQueue"

using namespace std;

int main()
{
    PriorityQueue<int> queue;

    // queue.enqueue(6);
    // queue.enqueue(5);
    // queue.enqueue(4);
    queue.enqueue(3);

    for (int i = 0; i < queue.getLength(); i++)
        cout << queue[i] << endl;

    return 0;
}