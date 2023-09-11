#include "Stack"
#include "Array"

Stack::Stack()
{
}

Stack::Stack(int top) : top{top}
{
}

void Stack::push(int el)
{
    stack->insert(el);
    top = el;
}

void Stack::pop()
{
    int topIndex = stack->length - 1;
    stack->removeAt(topIndex--);
    top = (*stack)[topIndex];
}

int Stack::getPeek()
{
    return top;
}