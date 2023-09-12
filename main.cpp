// Libraries
#include <iostream>

// Data Structures
#include "Stack"
#include "Stack.cpp"

using namespace std;

struct Balance
{
private:
    Stack<char> stack;
    unordered_map<char, char> brackets_map =
        {
            {'[', ']'},
            {'{', '}'},
            {'(', ')'},
            {'<', '>'},
    };

    // Methods
    bool isLeftBracket(char character)
    {
        bool isLeftBracket = false;
        for (const auto bracket : brackets_map)
            if (character == bracket.first)
                isLeftBracket = true;
        return isLeftBracket;
    }
    bool isRightBracket(char character)
    {
        bool isRightBracket = false;
        for (const auto bracket : brackets_map)
            if (character == bracket.second)
                isRightBracket = true;
        return isRightBracket;
    }
    void validateInput(string *str)
    {
        if (!str || str->length() == 0)
            throw invalid_argument("Invalid string input");
    }

public:
    bool isBalanced(string *str)
    {
        validateInput(str);

        for (char character : *str)
        {
            if (isLeftBracket(character))
                stack.push(character);

            else if (isRightBracket(character))
            {
                try
                {
                    const char lastOpenningBracket = stack.pop();
                    const char equivalentBracket = brackets_map[lastOpenningBracket];

                    if (character != equivalentBracket)
                        return false;
                }
                catch (logic_error &error)
                {
                    return false;
                };
            }
            else
                continue;
        }
        if (!stack.isStackEmpty())
            return false;

        return true;
    }
};

int main()
{

    // string *str = new string("{{()}}");
    // string *str = new string("{()}}");
    // string *str = new string("{()");
    // string *str = new string("()");
    // string *str = new string("<[{(1,2,3)}]>");
    string *str = new string("(3]");
    Balance balancer;

    cout << boolalpha << balancer.isBalanced(str) << endl;

    delete str;
    str = nullptr;

    return 0;
}