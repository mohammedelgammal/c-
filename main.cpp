#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

using namespace std;

void hear_sound(Animal *animal)
{
    animal->animalMakesSound();
}

int main()
{
    // Objects
    Dog dog;
    Cat cat;
    Animal animal;

    // Pointers
    Animal *animal_ptr = &animal;
    Dog *dog_ptr = &dog;
    Animal *cat_ptr = &cat;

    hear_sound(animal_ptr);
    hear_sound(dog_ptr);
    hear_sound(cat_ptr);

    // animal.animalMakesSound();
    // dog.animalMakesSound();
    // cat.animalMakesSound();

    return 0;
}