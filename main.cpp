// Libraries
#include <iostream>
#include <set>

using namespace std;

bool areAnagram(string &first, string &second)
{
    set<char> set;
    bool areAnagram = true;
    int i = 0, j = 0;

    if (first.length() != second.length())
        return false;

    while (i < first.length())
        if (!set.contains(first[i]))
            set.insert(first[i++]);

    while (j < first.length())
    {
        if (!set.contains(second[j]))
            return false;
        j++;
    }

    return true;
}

int main()
{
    string input = "", anagram = "";

    cout << boolalpha << areAnagram(input, anagram);

    return 0;
}