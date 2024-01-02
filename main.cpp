// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {4, 5, 3, 3, 3};

    vector<vector<int>> matrix = solution.findMatrix(nums);

    return 0;
}