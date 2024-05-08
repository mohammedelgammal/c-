#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << solution.trap(nums) << endl;

    return 0;
}