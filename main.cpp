#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    solution.push(-2);
    solution.push(0);
    solution.push(-3);
    cout << solution.getMin() << endl;
    solution.pop();
    solution.top();
    cout << solution.getMin() << endl;

    return 0;
}