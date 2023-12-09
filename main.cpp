// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {100, 4, 200, 3, 1, 2};

    cout << solution.longestConsecutive(nums);

    return 0;
}