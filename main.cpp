#include "Array.hpp"
#include <iostream>

using namespace std;

int main()
{
    Array arr{10};
    arr[0] = 20;

    cout << arr[0] << endl;

    return 0;
}