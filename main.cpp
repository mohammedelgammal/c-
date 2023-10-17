// Libraries
#include <iostream>
#include <set>

using namespace std;

bool isPalindrome(string &input)
{
    if (input.empty())
        return false;

    int i = 0, j = input.size() - 1;

    while (i < input.size())
    {
        if (input[i] != input[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main()
{
    string input = "";

    cout << boolalpha << isPalindrome(input);

    return 0;
}