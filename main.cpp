#include <iostream>
#include "Stack"
#include "Stack.cpp"

using namespace std;

string *reverseStr(string *str)
{
    string *reversed = new string{};
    Stack<char> *stack = new Stack<char>{};

    for (char ch : *str)
    {
        stack->push(ch);
    }

    while (stack->getLength())
    {
        reversed->push_back(stack->pop());
    }

    delete stack;
    stack = nullptr;

    return reversed;
}

int main()
{
    string targetStr = "time";
    string *reversedStr = reverseStr(&targetStr);

    for (int ch : *reversedStr)
    {
        cout << char(ch) << endl;
    }

    delete reversedStr;
    reversedStr = nullptr;

    return 0;
}