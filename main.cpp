#include <ostream>
#include "AlphaBeta"
#include <string>
#include <algorithm>

using namespace std;

// int Beta::total = 0;

int main()
{
    Alpha alpha;
    // Beta beta;

    extern int global_var;
    int sum(int a, int b);
    string name = "howard";
    int arr[7]{5, 8, 4, 1, 7, 9, 3};

    int age;

    char fillArr[10];

    fill(fillArr, fillArr + 10, 0);

    cout << "Filled Array is: ";

    for (int num : fillArr)
    {
        cout << num;
    }

    cout << '\n';

    // Beta::getInstances();

    cout
        << "global: " << sum(1, 4) << endl;

    sort(arr, arr + 7);

    cout << "Sorted array is: ";

    for (int num : arr)
    {
        cout << num;
    }

    cout << "\nfirst character in name is: " << name.front() << endl;

    return 0;
}