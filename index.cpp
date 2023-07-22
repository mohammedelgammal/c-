#include <iostream>
#include <iomanip>

using namespace std;

void printOdds(short limit)
{
    for (short i = 0; i <= limit; i++)
        (i % 2) && cout << i << endl;
}

int main()
{
    printOdds(10);
    return 0;
}