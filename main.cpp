#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 5};

    cout << *find(arr, arr + 8, 4) << endl;
    cout << "Number 5 found: " << count(arr, arr + 7, 5) << endl;

    return 0;
}