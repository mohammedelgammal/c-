#include "Person.hpp"
#include <iostream>

using namespace std;

void call_person(const Person &person)
{ 
    cout << "New Person location is: " << &person << endl;
}

int main()
{
    Person person_one{20};
    call_person(person_one);
    cout << "Old person address is: " << &person_one << endl;

    return 0;
}