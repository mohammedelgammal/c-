// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string s = "abc", t = "atcgbdecer";

    cout << boolalpha << solution.isSubsequence(s, t);

    return 0;
}