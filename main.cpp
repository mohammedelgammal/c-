// Libraries
#include <iostream>
#include <stack>

using namespace std;

void reverse(string &input)
{
    if (input.empty())
        return;

    stack<string> stack;
    string word, reversed;

    for (int i = 0; i < input.size(); i++)
    {
        word += input[i];
        if (input[i] == ' ')
        {
            word.pop_back();
            stack.push(word);
            stack.push(" ");
            word.clear();
        }
    }
    stack.push(word);

    int size = stack.size();

    for (int i = 0; i < size; i++)
    {
        reversed += stack.top();
        stack.pop();
    }

    input = reversed;
}

int main()
{
    string input = "";

    reverse(input);

    cout << input;

    return 0;
}