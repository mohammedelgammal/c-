#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << *find(arr, arr + 8, 4) << endl;

    return 0;
}