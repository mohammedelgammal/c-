#include <iostream>
#include "Stack"
#include "Stack.cpp"

using namespace std;

bool isBalanced(string *str)
{
    unordered_map<char, char> brackets_map =
        {
            {'[', ']'},
            {'{', '}'},
            {'(', ')'},
            {'<', '>'},
        };

    if (str->length() == 0 || str == nullptr)
        throw logic_error("Invalid input");

    Stack<char> *stack = new Stack<char>;
    bool isBalanced = true;

    for (char ch : *str)
    {
        if(stack)
        for (const auto bracket : brackets_map)
        {
            if (ch == bracket.first)
            {
                stack->push(ch);
                break;
            }
            if (ch == bracket.second)
            {
                const char lastOpenningBracket = stack->pop();
                const char equivalentBracket = brackets_map[lastOpenningBracket];

                if (ch != equivalentBracket)
                {
                    isBalanced = false;
                    return isBalanced;
                }
                break;
            }
        }
    }
    delete stack;
    stack = nullptr;

    return isBalanced;
}

int main()
{
    // string *str = new string("{()}}");

    string *str = new string("{()}");

    cout << boolalpha << isBalanced(str) << endl;

    delete str;
    str = nullptr;

    return 0;
}