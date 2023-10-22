// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string str = "r ac e  car";

    cout << boolalpha << solution.isPalindrome(str);

    return 0;
}