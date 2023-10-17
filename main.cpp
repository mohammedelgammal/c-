// Libraries
#include <iostream>

using namespace std;

char findMostRepeatedChar(string &input)
{
    unordered_map<char, int> map;
    int maxRepitions = 0;
    char mostRepeatedChar;

    for (char character : input)
    {
        if (map.contains(character))
        {
            int &repitions = map.find(character)->second;

            repitions++;

            if (repitions > maxRepitions)
            {
                maxRepitions = repitions;
                mostRepeatedChar = character;
            }
        }
        map.insert({character, 0});
    }

    return mostRepeatedChar;
}

int main()
{
    string input = "Hello";

    cout << findMostRepeatedChar(input);

    return 0;
}