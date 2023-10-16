// Libraries
#include <iostream>
#include <stack>

using namespace std;

void reverse(string &input)
{
    if (input.length() == 0)
        return;

    stack<char> stack;
    string reversed;

    for (int i = 0; i < input.length(); i++)
        stack.push(input[i]);

    for (int i = 0; i < input.length(); i++)
    {
        reversed += stack.top();
        stack.pop();
    }

    input = reversed;
}

int main()
{
    string input = "Hey";

    reverse(input);

    cout << input;

    return 0;
}