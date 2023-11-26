// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    solution.rotate(matrix);

    cout << '[';

    for (vector<int> vec : matrix)
    {
        cout << '[';
        for (int num : vec)
            cout << num << ',';
        cout << ']';
    }

    cout << ']';

    return 0;
}