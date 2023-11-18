// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << solution.maxArea(height);

    return 0;
}