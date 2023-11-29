// Libraries
#include <iostream>
#include <set>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<string> bank{"000", "111", "000"};

    cout << solution.numberOfBeams(bank);
}