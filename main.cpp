#include "Array"
#include <iostream>

using namespace std;

int main()
{
    Array arr(3);

    arr.insert(10);
    arr.insert(20);
    arr.insert(30);

    cout << arr[2] << endl;

    return 0;
}