#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 5};
    int unarranged_arr[] = {45, 2, 22, -17, 0, -30, 25, 55};
    int incl_arr[] = {3, 4, 5};

    cout << *find(arr, arr + 8, 4) << endl;
    cout << "Number 5 found: " << count(arr, arr + 7, 5) << endl;

    int matching_index = *search(unarranged_arr, unarranged_arr + 2, arr, arr + 6);

    if (matching_index)
    {
        cout << "matching start number is: " << matching_index << endl;
    }
    else
    {
        cout << "No matching found!" << endl;
    }

    sort(unarranged_arr, unarranged_arr + 8);

    for (int i = 0; i < 8; i++)
    {
        cout << unarranged_arr[i] << "\n";
    }

    return 0;
}