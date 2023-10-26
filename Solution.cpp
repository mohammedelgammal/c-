#include <iostream>
#include <stack>
#include <set>

#include "Solution"

using namespace std;

bool isOpenningBracket(const char character)
{
    return character == '(' ||
           character == '[' ||
           character == '{';
}

char getClosing(const char character)
{
    char result;
    switch (character)
    {
    case '(':
        result = ')';
        break;
    case '[':
        result = ']';
        break;
    case '{':
        result = '}';
        break;
    default:
        break;
    }

    return result;
}

bool Solution::isValid(string s)
{
    stack<char> stack;

    for (char character : s)
    {
        if (!isOpenningBracket(character))
        {
            if (stack.empty() || getClosing(stack.top()) != character)
                return false;
            stack.pop();
        }
        else
            stack.push(character);
    }

    return stack.empty();
}