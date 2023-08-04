#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(10) << "Last Name" << setw(10) << "First Name" << setw(10) << "Street Address" << setw(10) << "Town" << setw(10) << "State" << endl
         << setw(10) << "Jones" << setw(10) << "Bernard" << setw(20) << "108 Pine Lane" << setw(10) << "Littletown" << setw(10) << "Virginia" << endl
         << setw(10) << "Jones" << setw(10) << "Bernard" << setw(20) << "108 Pine Lane" << setw(10) << "Littletown" << setw(10) << "Virginia" << endl
         << setw(10) << "Jones" << setw(10) << "Bernard" << setw(20) << "108 Pine Lane" << setw(10) << "Littletown" << setw(10) << "Virginia" << endl;

    return 0;
}