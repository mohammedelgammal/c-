// Libraries
#include <iostream>
#include <sstream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {2, 7, 11, 15};

    vector<int> result = solution.twoSum(nums, 9);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << ", ";

    return 0;
}