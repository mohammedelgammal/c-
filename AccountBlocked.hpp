#ifndef ACCOUNTBLOCKED_HPP
#define ACCOUNTBLOCKED_HPP

#include <stdexcept>

using namespace std;

class AccountBlocked : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Account was blocked, please contact the admin!";
    }
};

#endif // ACCOUNTBLOCKED_HPP