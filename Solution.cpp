#include <iostream>
#include <algorithm>

#include "Solution"

using namespace std;

string toRoman(int intDigit, uint32_t power)
{
    string roman;
    unordered_map<int, char> map{
        {1, 'I'},
        {5, 'V'},
        {10, 'X'},
        {50, 'L'},
        {100, 'C'},
        {500, 'D'},
        {1000, 'M'},
    };
    int fives = intDigit / 5,
        ones = intDigit % 5;
    char romanFive = map[power * 5],
         romanOne = map[power];

    if (ones > 3)
    {
        roman.push_back(romanOne);
        if (fives)
            roman.push_back(map[power * 10]);
        else
            roman.push_back(romanFive);

        return roman;
    }

    if (fives)
        roman.push_back(romanFive);

    for (int i = 0; i < ones; i++)
        roman.push_back(romanOne);

    return roman;
}

string Solution::intToRoman(int num)
{
    string roman;
    uint32_t power = 1;

    while (num > 0)
    {
        int digit = num % 10;
        string romanDigit = toRoman(digit, power);
        roman.insert(0, romanDigit);
        power *= 10;
        num /= 10;
    }

    return roman;
}

