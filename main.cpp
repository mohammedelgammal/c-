#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(10) << "1990" << right << setw(5) << "135" << endl
         << left << setw(10) << "1991" << right << setw(5) << "7290" << endl
         << left << setw(10) << "1992" << right << setw(5) << "11300" << endl
         << left << setw(10) << "1993" << right << setw(5) << "16200" << endl;

    return 0;
}