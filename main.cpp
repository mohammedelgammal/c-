// Libraries
#include <iostream>

using namespace std;

char findMostRepeatedChar(string &input)
{
    vector<int> asciArray(256);
    int maxRepitions = 0;
    char maxCharacter;

    for (char character : input)
        asciArray[character]++;

    for (int i = 0; i < asciArray.size(); i++)
        if (asciArray[i] > maxRepitions)
        {
            maxRepitions = asciArray[i];
            maxCharacter = i;
        }

    return maxCharacter;
}

int main()
{
    string input = "hello";

    cout << findMostRepeatedChar(input);

    return 0;
}