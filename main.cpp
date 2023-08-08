#include <iostream>
#include "TrialClass"

using namespace std;

int main()
{
    char word[5];
    static int MAX = 7;

    cout << "Enter max 5 character word" << endl;

    cin.get(word, MAX);

    cout << word << endl;

    return 0;
}