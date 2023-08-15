#include <iostream>
using namespace std;

int main()
{
    const char str1[] = "Defines as array";
    const char *str2 = "Defines as pointers";

    cout << &str2 << endl;

    // ++str1; // Constant string cannot be increased
    ++str2; // Pointer can be increased

    cout << &str2 << endl;

    return 0;
}