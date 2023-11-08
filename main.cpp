// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> arr = {6, 2, 1, 2, 4, 5};

    cout << boolalpha << solution.canJump(arr);

    return 0;
}