#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<int> position{10, 8, 0, 5, 3};
    vector<int> speed{2, 4, 1, 1, 3};

    cout << solution.carFleet(12, position, speed);

    return 0;
}