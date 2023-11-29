#include <iostream>

#include "Solution"

int Solution::numberOfBeams(vector<string> &bank)
{
    int prev = 0, ans = 0;

    for (string row : bank)
    {
        int count = 0;
        for (char ch : row)
            if (ch == '1')
                count++;
        if (count)
        {
            ans += prev * count;
            prev = count;
        }
    }
    return ans;
}