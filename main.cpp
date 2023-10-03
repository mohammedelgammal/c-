// Libraries
#include <iostream>
#include "Heap"
// #include "Heap.cpp"

using namespace std;

int main()
{
    Heap heap{10};

    // heap.insert(5);
    // heap.insert(17);
    // heap.insert(4);
    // heap.insert(22);

    int arr[4]{5, 17, 4, 22};

    for (int i = 0; i < 4; i++)
        heap.insert(arr[i]);

    heap.remove();
    heap.remove();
    heap.remove();
    heap.remove();
    heap.remove();

    heap.toArray();

    return 0;
}