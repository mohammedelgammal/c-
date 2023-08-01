#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat() = default;
    void animalMakesSound() const override;
};

#endif // CAT_HPP
