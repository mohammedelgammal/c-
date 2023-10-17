// Libraries
#include <iostream>
#include <set>

using namespace std;

void removeDuplicates(string &input)
{
    set<char> set;
    string nonDuplicates;

    for (char character : input)
        if (!set.contains(character))
            set.insert(character);

    for (char character : set)
        nonDuplicates += character;

    input = nonDuplicates;
}

int main()
{
    string input = "Hello";

    removeDuplicates(input);

    cout << input;

    return 0;
}