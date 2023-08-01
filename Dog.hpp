#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog() = default;
    void animalMakesSound() const override;

    Dog(const Dog &) = delete;
    Dog &operator=(const Dog &) = delete;
};

#endif // DOG_HPP