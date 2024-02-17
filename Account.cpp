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