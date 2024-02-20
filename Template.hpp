#ifndef TEMPLATE
#define TEMPLATE

#include <iostream>
using namespace std;

class BeverageMaker
{
public:
    void makeBeverage(const int spoons) const;

protected:
    virtual void boilWater() const;
    virtual void addSugar(const int spoons) const;
    virtual void addCondiment() const {};
    virtual void brew() const {};
};

class TeaMaker : public BeverageMaker
{
public:
    void brew() const override;
    void addCondiment() const override;
};

class CoffeeMaker : public BeverageMaker
{
    void brew() const override;
    void addCondiment() const override;
};

#endif // TEMPLATE