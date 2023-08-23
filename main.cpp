#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 5};
    int unarranged_arr[] = {45, 2, 22, -17, 0, -30, 25, 55};

    cout << *find(arr, arr + 8, 4) << endl;
    cout << "Number 5 found: " << count(arr, arr + 7, 5) << endl;

    sort(unarranged_arr, unarranged_arr + 8);

    for (int i = 0; i < 8; i++)
    {
        cout << unarranged_arr[i] << "\n";
    }

    return 0;
}