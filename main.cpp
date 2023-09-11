#include <iostream>
#include "Stack"
#include "Stack.cpp"

using namespace std;

int main()
{
    string str = "rotator";
    string newStr;

    Stack<char> *stack = new Stack<char>{};

    for (char ch : str)
    {
        stack->push(ch);
    }

    while (stack->getLength())
    {
        newStr.push_back(stack->pop());
    }

    for (int ch : newStr)
    {
        cout << char(ch) << endl;
    }

    return 0;
}