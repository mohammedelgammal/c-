#include <iostream>
#include "Stack"

using namespace std;

int main()
{
    string str = "london";

    Stack stack;

    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    for (int i = 0; i < stack.getLength(); i++)
    {
        cout << stack[i] << endl;
    }

    return 0;
}