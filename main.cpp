#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double pop1 = 20E6, pop2 = 18.76E6, pop3 = 5E5;

    cout << left << setw(15) << setfill('.') << "Location" << right << setw(15) << setfill('.') << "Population" << endl
         << left << setw(15) << setfill('.') << "Cairo" << right << setw(15) << setfill('.') << pop1 << endl
         << left << setw(15) << setfill('.') << "Giza" << right << setw(15) << setfill('.') << pop2 << endl
         << left << setw(15) << setfill('.') << "Mansoura" << right << setw(15) << setfill('.') << pop3 << endl;

    return 0;
}