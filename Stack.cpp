#include "Stack"
#include "Array"

#include <iostream>

using std::logic_error;

template <typename T>
Stack<T>::Stack()
{
}

template <typename T>
Stack<T>::~Stack()
{
    delete stack;
    stack = nullptr;
}

template <typename T>
Stack<T>::Stack(T top) : top{top}
{
    stack->insert(top);
}

template <typename T>
void Stack<T>::push(T el)
{
    stack->insert(el);
    top = el;
}

template <typename T>
T Stack<T>::pop()
{
    if (isStackEmpty())
        throw logic_error("Stack is empty");

    T pop = (*stack)[stack->length - 1];
    stack->removeAt(stack->length - 1);
    top = stack->length - 1;
    return pop;
}

template <typename T>
T Stack<T>::getPeek() const
{
    if (isStackEmpty())
        throw logic_error("Stack is empty");
    return top;
}

template <typename T>
bool Stack<T>::isStackEmpty() const
{
    return stack->length == 0;
}

template <typename T>
int Stack<T>::getLength() const
{
    return stack->length;
}

template <typename T>
int Stack<T>::operator[](int index) const
{
    return (*stack)[index];
}