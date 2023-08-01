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

    vector<Animal> animals;
    animals.push_back(make_unique<Dog>(dog));
    animals.push_back(make_unique<Cat>(cat));

    return 0;
}