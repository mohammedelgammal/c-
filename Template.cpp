#include "Template.hpp"

void BeverageMaker::makeBeverage(const int spoons) const
{
    boilWater();
    addSugar(spoons);
    brew();
    addCondiment();
}

void BeverageMaker::boilWater() const
{
    cout << "Boiling water" << endl;
}

void BeverageMaker::addSugar(const int spoons) const
{
    cout << "Added " << spoons << " spoons" << endl;
}

void TeaMaker::brew() const
{
    cout << "Steeping tea..." << endl;
}

void TeaMaker::addCondiment() const
{
    cout << "Added clove flavour" << endl;
}

void CoffeeMaker::brew() const
{
    cout << "Added coffee to filter" << endl;
}

void CoffeeMaker::addCondiment() const
{
    cout << "Added chocolate to coffee" << endl;
}