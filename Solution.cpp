#include <iostream>
#include <algorithm>

#include "Solution"

void Solution::push(int val)
{
    if (mins.empty() || val <= mins.top())
        mins.push(val);
    stack.push(val);
}

void Solution::pop()
{
    if (stack.top() <= mins.top())
        mins.pop();
    stack.pop();
}

int Solution::top()
{
    return stack.top();
}

int Solution::getMin()
{
    return mins.top();
}
