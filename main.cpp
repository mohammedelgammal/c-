#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{2, 7, 11, 15};

    solution.twoSum(nums, 9);

    return 0;
}