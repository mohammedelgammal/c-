// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string str1 = "badc", str2 = "baba";

    cout << boolalpha << solution.isIsomorphic(str1, str2);

    return 0;
}