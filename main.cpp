#include <iostream>
#include <string>

using namespace std;

inline int &returnStringRef(int &number)
{
    number *= 2;
    return number;
}

int main()
{
    int number = 20;
    cout << number << endl;
    returnStringRef(number) = 10;
    cout << number << endl;
    return 1;
}
