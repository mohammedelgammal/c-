// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string s = "cbaebabacd", p = "abc";

    vector<int> count = solution.findAnagrams(s, p);

    cout << '[';
    for (int n : count)
        cout << n << ',';
    cout << ']';
}