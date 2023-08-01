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
        throw invalid_argument{"Exception occurred!"};
    }
    catch (const invalid_argument &err)
    {
        cout << err.what() << endl;
    }

    return 0;
}