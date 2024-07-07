#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<vector<int>> nums{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    cout << solution.searchMatrix(nums, 4);

    return 0;
}