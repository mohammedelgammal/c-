#include "Queue"
#include "Array"

template <typename T>
Queue<T>::Queue() : stack{new Array<T>{0}}
{
}

template <typename T>
Queue<T>::Queue(const T value) : stack(new Array<T>{0})
{
    stack->insert(value);
}

template <typename T>
Queue<T>::~Queue()
{
    delete stack;
    stack = nullptr;
}