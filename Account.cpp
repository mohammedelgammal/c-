#include "Account"

Account::Account(const int startAmount)
{
    if (startAmount <= 0)
        throw invalid_argument("Invalid start deposit amount");
    balance = startAmount;
}

void Account::deposit(const int amount)
{
    if (amount <= 0)
        throw invalid_argument("Invalid deposit amount.");
    balance += amount;
}

void Account::withdraw(const int amount)
{
    if (amount > balance)
        throw invalid_argument("Not enough balance");
    if (amount <= 0)
        throw invalid_argument("Invalid withdraw amount");
    balance -= amount;
}

int Account::getBalance() const
{
    return balance;
}

void VIPAccount::claimPrize()
{
    const int prize = 200;
    deposit(prize);
    cout << "You have successfully claimed your prize: $" << prize << endl;
}

void SilverAccount::claimPrize()
{
    const int prize = 50;
    deposit(prize);
    cout << "You have successfully claimed your prize: $" << prize << endl;
}