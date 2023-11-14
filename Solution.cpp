#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

string Solution::convert(string s, int numRows)
{
    int size = s.size(),
        jump = numRows * 2 - 2;
    string zigzag;

    for (int row = 0; row < numRows; row++)
    {
        for (int idx = row; idx < size; idx += jump)
        {
            int midJump = jump -  2 * row;
            zigzag.push_back(s[idx]);
            if (row > 0 && row < numRows - 1 && idx + midJump < size)
                zigzag.push_back(s[idx + midJump]);
        }
    }

    return zigzag;
}
