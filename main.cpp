// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<int> g = {1, 2, 3},
                s = {1, 1};

    cout << solution.findContentChildren(g, s);

    return 0;
}