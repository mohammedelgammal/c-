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

int Heap::getLeftChildIndex(const int index) const
{
    return (2 * index) + 1;
}

int Heap::getRightChildIndex(const int index) const
{
    return (2 * index) + 2;
}

int Heap::getGreaterChildIndex(const int index) const
{
    if (!hasRightChild(index))
        return getLeftChildIndex(index);

    if (!hasLeftChild(index))
        return index;

    return arr->at(getLeftChildIndex(index)) >
                   arr->at(getRightChildIndex(index))
               ? getLeftChildIndex(index)
               : getRightChildIndex(index);
}

bool Heap::hasRightChild(const int index) const
{
    return getRightChildIndex(index) <= arr->size();
}

bool Heap::hasLeftChild(const int index) const
{
    return getLeftChildIndex(index) <= arr->size();
}

bool Heap::isValidParent(const int index) const
{
    bool isValid = false;

    if (!hasLeftChild(index))
        return true;

    isValid = arr->at(getLeftChildIndex(index)) <= arr->at(index);

    if (hasRightChild(index))
        isValid &= arr->at(getRightChildIndex(index)) <= arr->at(index);

    return isValid;
}

void Heap::swapWithChild(const int index, const int value)
{
    arr->at(index) = arr->at(getGreaterChildIndex(index));
    arr->at(getGreaterChildIndex(index)) = value;
}

void Heap::bubbleDown(const int value)
{
    int index = 0;
    while (index <= arr->size() && !isValidParent(index))
    {
        swapWithChild(index, value);
        index = getGreaterChildIndex(index);
    }
}

void Heap::remove()
{
    arr->front() = arr->back();
    arr->pop_back();
    bubbleDown(arr->front());
}