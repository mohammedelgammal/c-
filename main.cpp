#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{3, 6, 7, 11};

    cout << solution.minEatingSpeed(nums, 8);

    return 0;
}