// Libraries
#include <iostream>

#include "Account"

using namespace std;

int main()
{
    VIPAccount vip(10);
    SilverAccount silver(10);

    cout << vip.getBalance() << endl;
    cout << silver.getBalance() << endl;

    vip.claimPrize();
    silver.claimPrize();

    cout << vip.getBalance() << endl;
    cout << silver.getBalance() << endl;

    return 0;
}