#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    struct descending
    {
        bool operator()(int a, int b)
        {
            return a > b;
        }
    };

    int arr[]{1, 2, 3, 4, 5};

    sort(arr, arr + 5, descending());

    for (int num : arr)
    {
        cout << num;
    }

    return 0;
}