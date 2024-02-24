// Libraries
#include <iostream>

using namespace std;

#include "Flyweight.cpp"

int main()
{
    CounterStrike counterStrike = CounterStrike();

    counterStrike.launchGame(2);

    return 0;
}