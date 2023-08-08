#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    char word[6] = "hello", word_copy[6];
    static int MAX = 7;

    cout << word_copy << endl; // nothing + endl

    strcpy(word_copy, word);

    cout << word_copy << endl; // hello + endl

    return 0;
}