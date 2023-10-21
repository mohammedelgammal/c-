// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    vector<string> words = {"cir", "car"};

    cout << solution.longestCommonPrefix(words);

    return 0;
}