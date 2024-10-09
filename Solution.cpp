#include <iostream>
#include <algorithm>

#include "Solution"

int Solution::guessNumber(int n)
{
    int l = 1, r = n;
        while(true) {
            int myGuess = l + (r - l) / 2;
            if(guess(myGuess) == -1) r = myGuess - 1;
            else if(guess(myGuess) == 1) l = myGuess + 1;
            else return myGuess;  
        }
        return -1;
}