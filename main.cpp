#include <iostream>

using namespace std;

// declaring a function
// telling the compiler about the variable
// reserve the variable a space in the memory
inline void cToFahrenheit();
// initializing a variabe
// set the function to an inital value

int main()
{
    cToFahrenheit();

    return 1;
}

void cToFahrenheit()
{
    cout << "function defined here! and declared before the main!" << endl;
}
