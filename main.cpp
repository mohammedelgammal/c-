// Libraries
#include <iostream>

using namespace std;

#include "AbstractFactory.cpp"

int main()
{
    ContactForm *contactForm = new ContactForm();

    contactForm->renderForm(new MaterialFactory());

    return 0;
}