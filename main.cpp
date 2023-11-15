// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> numbers{1, 2, 2, 1, 1, 0};

    solution.applyOperations(numbers);

    for (int num : numbers)
        cout << num;

    return 0;
}