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

    int i = 0, j = 0;
    bool areRotations = false;

    while (i < first.length())
    {
        if (j >= first.length())
            j = 0;

        if (first[i] == second[j])
        {
            areRotations = true;
            i++;
        }
        else
        {
            areRotations = false;

            if (i != 0)
                return false;
        }
        j++;
    }

    return areRotations;
}

int main()
{
    string input = "ABCD", rotation = "DBAC";

    cout << boolalpha << areRotations(input, rotation);

    return 0;
}