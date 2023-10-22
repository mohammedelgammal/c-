// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string haystack = "leetcode", needle = "leeto";

    cout << solution.strStr(haystack, needle);

    return 0;
}