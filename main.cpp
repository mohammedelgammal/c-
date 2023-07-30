#include "Length.hpp"
#include <iostream>

using namespace std;

int main()
{
    const Length length_one{10}, length_two{10};
    cout << boolalpha << (length_one == length_two) << endl;
    cout << boolalpha << (length_one == 20) << endl;
    cout << boolalpha << (length_one != length_two) << endl;
    cout << boolalpha << (length_one != 20) << endl;
}