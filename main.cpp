#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{3, 4, 5, 1, 2};

    cout << solution.findMin(nums);

    return 0;
}