// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string str = "abcabcbb";

    cout << solution.lengthOfLongestSubstring(str);

    return 0;
}