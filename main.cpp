// Libraries
#include <iostream>
#include "Heap"
// #include "Heap.cpp"

using namespace std;

int main()
{
    Heap heap{10};

    heap.insert(5);
    heap.insert(17);
    heap.insert(4);
    heap.insert(22);

    return 0;
}