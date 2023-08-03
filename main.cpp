#include <iostream>

int main()
{
    int signedVar = 2E9;
    unsigned int unsignedVar = 2E9;

    using std::cout, std::endl;

    cout << "signedVar: " << signedVar * 2 / 3 << endl
         << "unsignedVar: " << unsignedVar * 2 / 3 << endl;

    return 0;
}