#include <iostream>
using namespace std;

int main()
{
    int var1, var2;
    char char1;
    double dob1;

    reinterpret_cast<void *>(&char1);
    

    cout << &var1 << " - " << &var2 << endl;
    cout << reinterpret_cast<void *>(&char1) << endl;
    cout << &dob1 << endl;

    return 0;
}