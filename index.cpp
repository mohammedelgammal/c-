#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int one[10] = {1, 2, 3};
    int two[size(one)];

    for (int index : one)
        two[index] = one[index];

    cout << two[2];
    return 0;
}