// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> mat{{1, 1}, {1, 0}};

    solution.gameOfLife(mat);

    cout << '[';

    for (vector<int> vec : mat)
    {
        cout << '[';
        for (int el : vec)
            cout << el << ',';
        cout << ']';
    }

    cout << ']';

    return 0;
}