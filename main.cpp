// Libraries
#include <iostream>

using namespace std;

char getFirstUnrepeatedChar(string &str)
{
    char targetChar;
    unordered_map<char, int> hashTable;

    for (char chr : str)
    {
        if (hashTable[chr] == 0)
            hashTable[chr] = 1;
        else
            hashTable[chr] = 2;
    }

    for (char chr : str)
    {
        if (hashTable[chr] == 1)
        {
            targetChar = chr;
            break;
        }
    }

    return targetChar;
}

int main()
{
    unordered_map<string, string> hashTable;
    string targetString = "ggreen book";

    // getFirstUnrepeatedChar(targetString);
    cout << getFirstUnrepeatedChar(targetString) << endl;

    return 0;
}