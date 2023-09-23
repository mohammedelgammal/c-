// Libraries
#include <iostream>

using namespace std;

char getFirstRepeatedChar(string &str)
{
    char targetChar;
    unordered_map<char, int> hashTable;

    for (char chr : str)
    {
        if (hashTable[chr] == 1)
        {
            targetChar = chr;
            break;
        }
        hashTable[chr] = 1;
    }

    return targetChar;
}

int main()
{
    unordered_map<string, string> hashTable;
    string targetString = "green book";

    cout << getFirstRepeatedChar(targetString) << endl;

    return 0;
}