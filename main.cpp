// Libraries
#include <iostream>
#include <set>

using namespace std;

bool areAnagram(string &first, string &second)
{
    if (first.length() != second.length())
        return false;

    int firstSum = 0,
        secondSum = 0,
        i = 0,
        j = 0;

    while (i < first.length())
    {
        firstSum += first[i++];
        secondSum += second[j++];
    }

    if (firstSum != secondSum)
        return false;

    return true;
}

int main()
{
    string input = "ABCD", anagram = "ADCB";

    cout << boolalpha << areAnagram(input, anagram);

    return 0;
}