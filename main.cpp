// Libraries
#include <iostream>
#include <sstream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {1, 3, 4, 2};

    vector<int> result = solution.twoSum(nums, 6);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << ", ";

    return 0;
}