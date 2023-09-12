// Libraries
#include <iostream>

// Data Structures
#include "StackLinkedList"
#include "StackLinkedList.cpp"

using namespace std;

int main()
{
    StackLinkedList<int> stack;

    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    cout << stack.getLength() << endl;

    // cout << stack.getPeak() << endl;

    // cout << boolalpha << stack.isEmpty() << endl;

    // for (int i = 0; i < stack.getLength(); i++)
    // {
    //     cout << stack[i] << endl;
    // }

    return 0;
}