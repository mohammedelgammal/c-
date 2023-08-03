#include <iostream>

int main()
{
    long double numOne = 1.345E6L;
    double numTwo = 0;
    float numThree = 0;

    using std::cout, std::endl;

    cout << sizeof(numOne) << endl
         << numOne << endl;

    return 0;
}