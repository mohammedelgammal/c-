#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << solution.maxArea(nums) << endl;

    return 0;
}