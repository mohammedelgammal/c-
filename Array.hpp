#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

class Array
{
public:
    explicit Array(size_t size);
    ~Array();

    int &operator[](int index);

private:
    int *elements;
    size_t size;
};

#endif // ARRAY_HPP