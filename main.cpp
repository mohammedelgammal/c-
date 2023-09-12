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

    if (!str || str->length() == 0)
        throw logic_error("Invalid input");

    Stack<char> *stack = new Stack<char>;
    bool isBalanced = true;

    for (char ch : *str)
    {
        for (const auto bracket : brackets_map)
        {
            if (ch == bracket.first)
            {
                stack->push(ch);
                break;
            }
            else if (ch == bracket.second)
            {
                try
                {
                    const char lastOpenningBracket = stack->pop();
                    const char equivalentBracket = brackets_map[lastOpenningBracket];
                    if (ch != equivalentBracket)
                    {
                        isBalanced = false;
                        return isBalanced;
                    }
                }
                catch (logic_error &error)
                {
                    isBalanced = false;
                    return isBalanced;
                }
            }
            else
            {
                continue;
            }
        }
    }
    if (stack->getLength() != 0)
    {
        isBalanced = false;
        return isBalanced;
    }

    delete stack;
    stack = nullptr;

    return isBalanced;
}

int main()
{
    // string *str = new string("{{()}}");
    // string *str = new string("{()}}");
    // string *str = new string("{()");
    // string *str = new string("()");
    // string *str = new string("<[{(1,2,3)}]>");
    string *str = new string("");

    cout << boolalpha << isBalanced(str) << endl;

    delete str;
    str = nullptr;

    return 0;
}