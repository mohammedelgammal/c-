#include <iostream>

namespace math
{
    template <typename T>
    T sumUp(T one, T two)
    {
        return one + two;
    }

}

int main()
{
    using math::sumUp, std::cout, std::endl;

    cout << sumUp(1, 2) << endl;

    return 0;
}