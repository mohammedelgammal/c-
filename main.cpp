#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

#include <vector>

using namespace std;

void hear_sound(unique_ptr<Animal> &animal)
{
    animal->animalMakesSound();
}

int main()
{
    // Objects
    Dog dog;
    Cat cat;
    Animal animal;

    try
    {
        // throw invalid_argument{"Invalid!"};
        throw out_of_range{"Out of range!"};
    }
    catch (const out_of_range &err)
    {
        cout << "Plus Handling: " << err.what() << endl;
    }
    catch (const logic_error &err)
    {
        cout << err.what() << endl;
    }

    return 0;
}