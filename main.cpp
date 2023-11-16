// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> numbers{2, 3, 1, 2, 4, 3};

    cout << solution.minSubArrayLen(7, numbers);

    return 0;
}