#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> nums{-1, 0, 3, 5, 9, 12};

    cout << solution.search(nums, 9);

    return 0;
}