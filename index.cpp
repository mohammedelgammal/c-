#include <iostream>
#include <iomanip>

using namespace std;

void display_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int search()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 0;
    int current = 0;
    while (current < size(arr) - 1)
    {
        if (arr[current] == target)
            return arr[current];
        else
            current++;
    }
    return -1;
}

int main()
{
    cout << search();
    return 0;
}