#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{3, 1, 4, 1, 5, 9, 2, 6};

    for (int num : solution.dailyTemperatures(nums))
        cout << num << ", ";

    return 0;
}