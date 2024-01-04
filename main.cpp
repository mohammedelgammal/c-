// Libraries
#include <iostream>
#include <unordered_map>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums = {2, 3, 3, 2, 2, 4, 2, 3, 4};

    cout << solution.minOperations(nums);

    return 0;
}