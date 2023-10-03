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

int Heap::getParentIndex(int index) const
{
    return floor(((index - 1) - 1) / 2);
}

void Heap::setParent(const int index, const int value)
{
    arr->at(getParentIndex(index)) = value;
}

void Heap::swap(const int index, const int value)
{
    arr->at(index) = arr->at(getParentIndex(index));
    setParent(index, value);
}

void Heap::bubbleUp(const int value)
{
    int index = arr->size() - 1;
    while (getParentIndex(index) >= 0 &&
           value > arr->at(getParentIndex(index)))
    {
        swap(index, value);
        index = getParentIndex(index);
    }
}

void Heap::insert(const int value)
{
    arr->push_back(value);

    bubbleUp(value);
}

void Heap::toArray() const
{
    for (int i = 0; i < arr->size(); i++)
        cout << arr->at(i) << '|';
}