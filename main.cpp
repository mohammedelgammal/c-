// Libraries
#include <iostream>

using namespace std;

void capitalize(string &input)
{
    int startIndex = 0, endIndex = 0;
    int CASE_DIFFERENCE = 32;

    while (endIndex < input.length())
    {
        if (input[endIndex] == ' ' || endIndex >= input.length() - 1)
        {
            if (input[startIndex] != ' ' && input[startIndex] >= 97)
                input[startIndex] -= CASE_DIFFERENCE;
            startIndex = endIndex + 1;
        }
        endIndex++;
    }
}

int main()
{
    string input = "  hello there,   Good mornning!  ";

    capitalize(input);

    cout << input;

    return 0;
}