#include "QueueLinkedList"

template <typename T>
QueueLinkedList<T>::QueueLinkedList() : list{new LinkedList<T>}
{
}

template <typename T>
QueueLinkedList<T>::QueueLinkedList(const T value) : list{new LinkedList<T>{value}}
{
}

template <typename T>
QueueLinkedList<T>::~QueueLinkedList()
{
    delete list;
    list = nullptr;
}