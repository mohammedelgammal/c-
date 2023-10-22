// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string haystack = "saebsad", needle = "sad";

    cout << solution.strStr(haystack, needle);

    return 0;
}