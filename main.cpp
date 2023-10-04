// Libraries
#include <iostream>

#include "Tries"
// #include "Tries.cpp"

using namespace std;

int main()
{
    Tries tries;
    string str = "cat", str2 = "care";
    string stra = "", stra2 = "car", stra3 = "care";

    tries.insert(str);
    tries.insert(str2);

    cout << boolalpha << tries.contains(stra) << endl;
    cout << boolalpha << tries.contains(stra2) << endl;
    cout << boolalpha << tries.contains(stra3) << endl;

    return 0;
}