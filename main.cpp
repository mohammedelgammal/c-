// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    uint32_t input = 00000010100101;

    cout << solution.hammingWeight(input);

    return 0;
}