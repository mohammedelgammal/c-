// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> ans = solution.spiralMatrixIII(1, 4, 0, 0);

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