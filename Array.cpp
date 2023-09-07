#include "Array"

Array::Array(int length)
{
    this->length = length;
    this->array = new int[length];
}

void Array::insert(int number)
{
    this->array[this->index++] = number;
}

int Array::operator[](const int number) const
{
    return this->array[number];
}