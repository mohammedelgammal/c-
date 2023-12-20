// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> nums = {{1, 4}, {0, 4}};

    vector<vector<int>> ans = solution.merge(nums);

    cout << '[';
    for (vector<int> vec : ans)
        for (int a : vec)
            cout << a << ',';
    cout << ']';

    return 0;
}