#include "QueueStack"

template <typename T>
QueueStack<T>::QueueStack() : stack{new Stack<T>}
{
}

template <typename T>
QueueStack<T>::QueueStack(const T value) : stack{new Stack<T>{value}}
{
}

template <typename T>
QueueStack<T>::~QueueStack()
{
    delete stack;
    stack = nullptr;
}

template <typename T>
void QueueStack<T>::enqueue(T value)
{
    stack->push(value);
}

template <typename T>
void QueueStack<T>::dequeue()
{
    Stack<T> queueStack;
    QueueStack<T> *popQueue = new QueueStack<T>;
    T poppedNode = getPeak();

    do
    {
        queueStack.push(stack->pop());
    } while (!isEmpty());

    do
    {
        T peakNode = queueStack.pop();
        if (peakNode == poppedNode)
            popQueue->enqueue(peakNode);
    } while (!queueStack.isStackEmpty());

    delete stack;
    stack = popQueue->stack;
    popQueue = nullptr;
}

template <typename T>
T QueueStack<T>::getPeak() const
{
    return stack->getPeak();
}

template <typename T>
T QueueStack<T>::getBottom() const
{
    return stack->*(stack)[stack->stack->indexOf(stack->stack->length - 1)];
}

template <typename T>
bool QueueStack<T>::isEmpty() const
{
    return stack->isStackEmpty();
}

template <typename T>
int QueueStack<T>::getLength() const
{
    return stack->getLength();
}

template <typename T>
T QueueStack<T>::operator[](const int index) const
{
    return (*stack)[index];
}
