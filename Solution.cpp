#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

int toBinary(char character)
{
    return character == '0' ? 0 : 1;
}

string Solution::addBinary(string a, string b)
{
    string ans;
    string::reverse_iterator i = a.rbegin(), j = b.rbegin();
    int carry = 0,
        sum = 0;

    while (i != a.rend() || j != b.rend())
    {
        int biA = i != a.rend() ? toBinary(*i++) : 0;
        int biB = j != b.rend() ? toBinary(*j++) : 0;
        sum = biA + biB + carry;
        ans.insert(0, to_string(sum % 2));
        carry = sum / 2;
    }

    if (carry > 0)
        ans.insert(0, to_string(carry));

    return ans;
}