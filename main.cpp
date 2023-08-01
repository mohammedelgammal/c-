#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

#include <vector>

using namespace std;

void hear_sound()
{
    throw logic_error{"Error happend somewhere!"};
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