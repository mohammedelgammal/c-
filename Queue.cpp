#include "Queue"
#include "Array"
#include "Stack"

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

template <typename T>
void Queue<T>::enqueue(const T value)
{
    stack->insert(value);
}

template <typename T>
T Queue<T>::dequeue()
{
    const T lastNode = (*stack)[0];
    stack->removeAt(0);
    return lastNode;
}

template <typename T>
T Queue<T>::getPeak() const
{
    return (*stack)[stack->length - 1];
}

template <typename T>
T Queue<T>::getBottom() const
{
    return (*stack)[0];
}

template <typename T>
bool Queue<T>::isEmpty() const
{
    return stack->length == 0;
}

template <typename T>
int Queue<T>::getLength() const
{
    return stack->length;
}

template <typename T>
T Queue<T>::operator[](const int index) const
{
    return (*stack)[index];
}

template <typename T>
void Queue<T>::reverse()
{
    Stack<T> reverseStack;
    Queue<T> *reversedQueue = new Queue<T>;

    while (!isEmpty())
        reverseStack.push(dequeue());

    while (!reverseStack.isStackEmpty())
        reversedQueue->enqueue(reverseStack.pop());

    delete stack;
    stack = reversedQueue->stack;
    reversedQueue = nullptr;
}