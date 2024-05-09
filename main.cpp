#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    vector<string> tokens{"2", "1", "+", "3", "*"};

    cout << solution.evalRPN(tokens) << endl;

    return 0;
}