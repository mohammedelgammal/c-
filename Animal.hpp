#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
public:
    Animal() = default;
    virtual ~Animal() = default;
    virtual void animalMakesSound() const;
};

#endif // ANIMAL_HPP