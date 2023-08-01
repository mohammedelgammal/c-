#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog() = default;
    void animalMakesSound() const override;
};

#endif // DOG_HPP