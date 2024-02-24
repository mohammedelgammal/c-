// Libraries
#include <iostream>

using namespace std;

#include "Bridge.cpp"

int main()
{
    Person *person = new Person(new FlyingCarnivorous());
    Crocodile *aligator = new Crocodile(new SwimmingCarnivorous());

    person->eat();
    person->study();
    person->move();

    aligator->setLivingArea("Nile River");
    cout << aligator->getLivingArea() << endl;
    aligator->hunt();
    aligator->eat();
    aligator->move();

    return 0;
}