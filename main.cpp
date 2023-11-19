// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> nums{-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = solution.threeSum(nums);

    cout << '[';
    for (vector<int> vec : ans)
    {
        cout << '[';
        for (int num : vec)
            cout << num << ',';
        cout << ']';
    }
    cout << ']';

    return 0;
}