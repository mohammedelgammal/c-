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

    arr.removeAt(3);

    cout << arr.indexOf(10) << endl;
    // cout << arr.indexOf(23) << endl;

    // for (int i = 0; i < arr.length; i++)
    //     cout << arr[i] << endl;

    return 0;
}