// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> numbers{0, 1, 3, 0, 3, 0};

    solution.moveZeroes(numbers);

    for (int num : numbers)
        cout << num;

    return 0;
}