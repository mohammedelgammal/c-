#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{-1, 0, 1, 2, -1, -4};

    solution.threeSum(nums);

    return 0;
}