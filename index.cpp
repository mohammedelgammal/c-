#include <iostream>
#include <array>
#include <limits.h>
#include <string.h>
using namespace std;

void swapCase(string word)
{
    const unsigned short wordLength = sizeof(word) / sizeof(word[0]);
    for (short i = 0; i < wordLength - 1; i++)
        if (word[i] != ' ')
            cout << char(tolower(word[i]));
}

int main()
{
    swapCase("EL   Z Er o");
    return 0;
}