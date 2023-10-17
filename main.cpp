// Libraries
#include <iostream>
#include <stack>

using namespace std;

bool areRotations(string &first, string &second)
{
    if (first == second)
        return true;

    if (first.length() != second.length())
        return false;

    int pivot = first.front(), difference = -1;

    for (int i = 0; i < second.length(); i++)
    {
        if (second[i] == pivot)
            difference = i;
    }

    if (difference < 0)
        return false;

    int firstIndex = 0, secondIndex = difference;

    while (firstIndex < first.length())
    {
        if (secondIndex >= second.length())
            secondIndex = 0;

        if (first[firstIndex] != second[secondIndex])
            return false;

        firstIndex++;
        secondIndex++;
    }

    return true;
}

int main()
{
    string input = "ABCD", rotation = "BCAD";

    cout << boolalpha << areRotations(input, rotation);

    return 0;
}