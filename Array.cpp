#include "Array"
#include <stdexcept>

using namespace std;

// Utils
template <typename T>
void Array<T>::validateIndex(const int targetIndex) const
{
    if (targetIndex > length - 1 || targetIndex < 0)
        throw out_of_range("Index out of range");
}

template <typename T>
Array<T>::Array(int length)
{
    this->length = length;
    this->array = new T[length];
}
template <typename T>
Array<T>::Array() : length{0}, array{new T[0]} {}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
    array = nullptr;
}

template <typename T>
void Array<T>::insert(const T el)
{
    if (index > length - 1)
    {
        T *resizedArray = new T[++length];
        for (int i = 0; i < length; i++)
            resizedArray[i] = array[i];
        delete[] array;
        array = resizedArray;
        resizedArray = nullptr;
    }
    array[index++] = el;
}

template <typename T>
void Array<T>::insertAt(const T el, const int index)
{
    if (index > length - 1)
    {
        T *resizedArray = new T[index + 1];
        for (int i = 0; i < length; i++)
            resizedArray[i] = array[i];
        delete[] array;
        array = resizedArray;
        resizedArray = nullptr;
    }
    array[index] = el;
}

template <typename T>
void Array<T>::removeAt(const int targetIndex)
{
    validateIndex(targetIndex);
    T *resizedArray = new T[--length];
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

template <typename T>
int Array<T>::indexOf(const T el) const
{
    int targetIndex = -1;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == el)
            targetIndex = i;
    }
    if (targetIndex == -1)
    {
        throw logic_error("Cannot find this el");
    }
    return targetIndex;
};

template <typename T>
T &Array<T>::operator[](const int targetIndex) const
{
    validateIndex(targetIndex);
    return this->array[targetIndex];
}