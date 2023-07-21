#include <iostream>
#include <array>
#include <limits.h>
#include <string.h>
using namespace std;

void guess()
{
    const unsigned short num = 7;
    unsigned short guesses = 0;
    unsigned short guess;
    while (guesses < 4)
    {
        cout << "Please guess a number between 0 and 10!" << endl;
        cin >> guess;
        if (guess == num)
        {
            cout << "Congrats! your guess is correct!" << endl;
            return;
        }
        else
        {
            cout << "Oh wrong guess! Try harder!" << endl;
            guesses++;
        }
    }
    cout << "Tries are over!";
}

int main()
{
    guess();
    return 0;
}