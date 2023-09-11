#include "Stack"
#include "Array"

#include <iostream>

using std::logic_error;

Stack::Stack() : top{}
{
}

Stack::Stack(int top) : top{top}
{
    stack.insert(top);
}

void Stack::push(int el)
{
    stack.insert(el);
    top = el;
}

void Stack::pop()
{
    if (isStackEmpty())
        throw logic_error("Stack is empty");

    int topIndex = stack.length - 1;
    stack.removeAt(topIndex--);
    top = stack[topIndex];
}

int Stack::getPeek() const
{
    if (isStackEmpty())
        throw logic_error("Stack is empty");
    return top;
}

bool Stack::isStackEmpty() const
{
    return stack.length == 0;
}

int Stack::getLength() const
{
    return stack.length;
}

int Stack::operator[](int index) const
{
    return stack[index];
}