#include "PriorityQueueHeap"

PriorityQueueHeap::PriorityQueueHeap(const int value) : heap{new Heap{value}} {}

PriorityQueueHeap::~PriorityQueueHeap()
{
    delete heap;
    heap = nullptr;
}

void PriorityQueueHeap::enqueue(const int value)
{
    heap->insert(value);
}

int PriorityQueueHeap::dequeue()
{
    return heap->remove();
}

bool PriorityQueueHeap::isEmpty() const
{
    return heap->isEmpty();
}
