#include "Array"
#include <stdexcept>

using namespace std;

// Utils
void Array::validateIndex() const
{
    if (index > length - 1 || index < 0)
        throw out_of_range("Index out of range");
}

Array::Array(int length)
{
    this->length = length;
    this->array = new int[length];
}

Array::~Array()
{
    delete[] array;
    array = nullptr;
}

void Array::insert(const int number)
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

void Array::removeAt(const int targetIndex)
{
    validateIndex();
    int *resizedArray = new int[--length];
    for (int i = targetIndex; i < length; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < length; i++)
    {
        resizedArray[i] = array[i];
    }
    delete[] array;
    array = resizedArray;
    resizedArray = nullptr;
}

int Array::operator[](const int targetIndex) const
{
    validateIndex();
    return this->array[targetIndex];
}