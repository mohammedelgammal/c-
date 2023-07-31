#include "Array.hpp"
#include <iostream>

using namespace std;

Array::Array(size_t size)
{
    this->elements = new int[size];
    this->size = size;
}
Array::~Array()
{
    delete elements;
    elements = nullptr;
}

int &Array::operator[](int index)
{
    if (index > this->size)
    {
        throw invalid_argument("index");
    }
    return elements[index];
}