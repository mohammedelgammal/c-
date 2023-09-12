#include "LinkedList"
#include "StackLinkedList"

template <typename T>
StackLinkedList<T>::StackLinkedList() : stack{new LinkedList<T>}
{
}

template <typename T>
StackLinkedList<T>::StackLinkedList(T top) : stack{new LinkedList<T>{top}}, top{top}
{
}

template <typename T>
StackLinkedList<T>::~StackLinkedList()
{
    delete stack;
    stack = nullptr;
}