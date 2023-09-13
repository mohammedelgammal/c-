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

template <typename T>
void QueueLinkedList<T>::enqueue(const T value)
{
    list->addLast(value);
}

template <typename T>
T QueueLinkedList<T>::dequeue()
{
    if (isEmpty())
        throw logic_error("Queue is empty");

    const T bottomNode = (*list)[0];
    list->deleteFirst();
    return bottomNode;
}

template <typename T>
T QueueLinkedList<T>::getPeak() const
{
    return list->getKthFromEnd(1);
}

template <typename T>
T QueueLinkedList<T>::getBottom() const
{
    return (*list)[0];
}

template <typename T>
bool QueueLinkedList<T>::isEmpty() const
{
    return list->isListEmpty();
}

template <typename T>
int QueueLinkedList<T>::getLength() const
{
    return list->indexOf(list->getKthFromEnd(1)) + 1;
}

template <typename T>
T QueueLinkedList<T>::operator[](const int index) const
{
    return (*list)[index];
}