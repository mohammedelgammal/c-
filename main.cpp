#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;
    vector<int> nums{1, 3, -1, -3, 5, 3, 6, 7};

    solution.maxSlidingWindow(nums, 3);

    return 0;
}