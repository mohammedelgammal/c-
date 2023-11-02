// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    uint32_t input = 000000101001010000011;

    cout << solution.reverseBits(input);

    return 0;
}