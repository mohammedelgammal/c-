// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<vector<int>> mat{{2, 29, 20, 26, 16, 28}, {12, 27, 9, 25, 13, 21}, {32, 33, 32, 2, 28, 14}, {13, 14, 32, 27, 22, 26}, {33, 1, 20, 7, 21, 7}, {4, 24, 1, 6, 32, 34}},
        target{{4, 33, 13, 32, 12, 2}, {24, 1, 14, 33, 27, 29}, {1, 20, 32, 32, 9, 20}, {6, 7, 27, 2, 25, 26}, {32, 21, 22, 28, 13, 16}, {34, 7, 26, 14, 21, 28}};

    solution.rotate(mat);

    mat == target ? cout << true : cout << false;

    return 0;
}