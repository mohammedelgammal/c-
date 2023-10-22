// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<string> words = {"flower", "flow", "flight"};

    cout << solution.longestCommonPrefix(words);

    return 0;
}