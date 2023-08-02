#include "Pair"
#include <iostream>

int main()
{
    Pair pair_one{10, "well"};

    using std::cout;

    cout << pair_one.getValue();

    return 0;
}