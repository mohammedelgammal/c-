#include <iostream>

using namespace std;
#include "Solution"

int main()
{
    Solution solution;

    string s = "A man, a plan, a canal: Panama";

    cout << boolalpha << solution.isPalindrome(s);

    return 0;
}