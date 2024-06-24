#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{3, 8, 5, 2, 25};

    for (int num : solution.help_classmate(nums, 5))
        cout << num << ", ";

    return 0;
}