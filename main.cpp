#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long pop1 = 21E5, pop2 = 74E3, pop3 = 11E4;

    cout << left << setw(15) << "LOCATION" << right << setw(15) << "POPULATION" << endl
         << left << setw(15) << "Mansoura" << right << setw(15) << pop1 << endl
         << left << setw(15) << "Gharbia" << right << setw(15) << pop2 << endl
         << left << setw(15) << "Sohag" << right << setw(15) << pop3 << endl;

    return 0;
}