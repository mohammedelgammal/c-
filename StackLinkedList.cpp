#include "LinkedList"
#include "StackLinkedList"

template <typename T>
StackLinkedList<T>::StackLinkedList() : stack{new LinkedList<T>}
{
}

template <typename T>
StackLinkedList<T>::StackLinkedList(T top) : stack{new LinkedList<T>{top}}
{
}

template <typename T>
StackLinkedList<T>::~StackLinkedList()
{
    delete stack;
    stack = nullptr;
}

template <typename T>
void StackLinkedList<T>::push(const T value)
{
    stack->addLast(value);
}

template <typename T>
T StackLinkedList<T>::pop()
{
    stack->deleteLast();
}

template <typename T>
T StackLinkedList<T>::getPeak() const
{
    return stack->getKthFromEnd(1);
}

template <typename T>
bool StackLinkedList<T>::isEmpty() const
{
    return stack->isListEmpty();
}