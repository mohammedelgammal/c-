// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> mat{{0, 0, 0}, {0, 1, 0}, {1, 1, 1}},
        target{{1, 1, 1}, {0, 1, 0}, {0, 0, 0}};

    cout << boolalpha << solution.findRotation(mat, target);

    return 0;
}