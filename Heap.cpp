#include "Heap"
#include <iostream>

using std::cout, std::endl, std::floor;

Heap::Heap(const int value) : arr{new vector<int>{value}}
{
}

Heap::~Heap()
{
    delete arr;
    arr = nullptr;
}

int Heap::getParentIndex(const int value) const
{
    return floor(((arr->size() - 1) - 1) / 2);
}

void Heap::setParent(const int value)
{
    arr->at(getParentIndex(value)) = value;
}

void Heap::swap(const int index, const int value)
{
    setParent(value);
    arr->at(index) = getParentIndex(value);
}

void Heap::bubbleUp(const int value)
{
    int index = arr->size() - 1;
    while (getParentIndex(value) >= 0 &&
           value > arr->at(getParentIndex(value)))
    {
        swap(index, value);
        index = getParentIndex(value);
    }
}

void Heap::insert(const int value)
{
    arr->push_back(value);

    bubbleUp(value);
}