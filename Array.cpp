#include "Array"
#include <stdexcept>

using namespace std;

Array::Array(int length)
{
    this->length = length;
    this->array = new int[length];
}

Array::~Array()
{
    delete[] array;
}

void Array::insert(int number)
{
    if (index > length - 1)
    {
        int *resizedArray = new int[++length];
        for (int i = 0; i < length; i++)
            resizedArray[i] = array[i];
        delete[] array;
        array = resizedArray;
        resizedArray = nullptr;
    }
    array[index++] = number;
}

int Array::operator[](const int index) const
{
    if (index > length - 1 || index < 0)
        throw out_of_range("Index out of range");
    return this->array[index];
}