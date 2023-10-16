// Libraries
#include <iostream>
#include <set>

using namespace std;

int countVowels(string &input)
{
    if (input.length() == 0)
        return 0;

    set<char> vowels{'a', 'e', 'o', 'u', 'i'};
    int vowelsCount = 0;

    for (int i = 0; i < input.length(); i++)
        if (vowels.contains(input[i]))
            vowelsCount++;

    return vowelsCount;
}

int main()
{
    string input = "Hey";

    cout << countVowels(input);

    return 0;
}