// Libraries
#include <iostream>

#include "Account"

using namespace std;

int main()
{
    Account *account = new Account(10);

    account->deposit(15);
    account->withdraw(5);

    cout << "your current balance: $" << account->getBalance() << endl;

    return 0;
}