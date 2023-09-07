#include "Array"
#include <iostream>

using namespace std;

int main()
{
    Array arr(3);

    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);
    arr.insert(50);

    cout << arr[arr.length - 1] << endl;

    return 0;
}