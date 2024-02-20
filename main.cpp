// Libraries
#include <iostream>
#include "Template.hpp"

using namespace std;

int main()
{
    cout << "Making tea" << endl;
    cout << "=≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠=" << endl;
    BeverageMaker *teaMaker = new TeaMaker();
    teaMaker->makeBeverage(2);

    cout << "Making coffee" << endl;
    cout << "=≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠=" << endl;

    BeverageMaker *coffeeMaker = new CoffeeMaker();
    coffeeMaker->makeBeverage(2);

    return 0;
}