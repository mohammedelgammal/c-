// Libraries
#include <iostream>
#include <stack>

using namespace std;

void reverse(string &input)
{
    if (input.length() == 0)
        return;

    string reversed;

    for (int i = input.length() - 1; i >= 0; i--)
        reversed += input[i];

    input = reversed;
}

int main()
{
    string input = "Hey";

    reverse(input);

    cout << input;

    return 0;
}