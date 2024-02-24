// Libraries
#include <iostream>

using namespace std;

#include "Factory.cpp"

int main()
{
    Printer *printer = new Printer();

    printer->printBook();

    return 0;
}