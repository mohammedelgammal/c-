#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{73, 74, 75, 71, 69, 72, 76, 73};

    for (int num : solution.dailyTemperatures(nums))
        cout << num << ", ";

    return 0;
}