#include <iostream>
#include <iomanip>

using namespace std;

void display_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    display_array(arr, size(arr));
    return 0;
}