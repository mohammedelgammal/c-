// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {1, 2, 2, 6, 6, 6, 6, 7, 10};

    cout << solution.findSpecialInteger(nums);

    return 0;
}