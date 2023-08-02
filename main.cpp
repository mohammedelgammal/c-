#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "AccountBlocked.hpp"
#include <iostream>

#include <vector>

using namespace std;

void hear_sound()
{
    try
    {
        throw AccountBlocked{};
    }
    catch (AccountBlocked &err)
    {
        cout << "First catch: " << err.what() << endl;
        throw;
    }
}

int main()
{
    // Objects
    Dog dog;
    Cat cat;
    Animal animal;

    try
    {
        hear_sound();
    }
    catch (exception &err)
    {
        cout << "Handled through main: " << err.what() << endl;
    }

    return 0;
}