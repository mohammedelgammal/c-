// Libraries
#include <iostream>

#include "Solution"

using namespace std;

int main()
{
    Solution solution;

    string ransomNote = "aa", magazine = "ab";

    cout << boolalpha << solution.canConstruct(ransomNote, magazine);

    return 0;
}