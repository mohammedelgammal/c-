// Libraries
#include <iostream>

using namespace std;

char findMostRepeatedChar(string &input)
{
    unordered_map<char, int> map;
    int max = 0;
    char mostRepeatedChar;

    for (char character : input)
    {
        if (map.contains(character))
            map.find(character)->second++;
        map.insert({character, 0});
    }

    for (pair<char, int> child : map)
        if (child.second > max)
        {
            max = child.second;
            mostRepeatedChar = child.first;
        }

    return mostRepeatedChar;
}

int main()
{
    string input = "Hello";

    cout << findMostRepeatedChar(input);

    return 0;
}