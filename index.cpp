#include <iostream>
#include <iomanip>

using namespace std;

void search()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int temp_element = 0;
    bool swapped = false;
    do
    {
        swapped = false;
        for (int index = 0; index < 8; index++)
        {
            if (arr[index] < arr[index + 1])
            {
                temp_element = arr[index + 1];
                arr[index + 1] = arr[index];
                arr[index] = temp_element;
                swapped = true;
            }
        }
    } while (swapped);
    for (int el : arr)
        cout << el << endl;
}

int main()
{
    search();
    return 0;
}