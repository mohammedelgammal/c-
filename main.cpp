// Libraries
#include <iostream>
#include <set>

using namespace std;

bool isPalindrome(string &input)
{
    string reversed;

    for (int i = input.length() - 1; i >= 0; i--)
        reversed.push_back(input[i]);

    return reversed == input;
}

int main()
{
    string input = "racecare";

    cout << boolalpha << isPalindrome(input);

    return 0;
}