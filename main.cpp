#include <iostream>
using namespace std;

template <typename T>

T sumTwo(const T firstNum, const T secondNum)
{
    return firstNum + secondNum;
}

int main()
{
    cout << sumTwo(1.41, 2.94) << endl;

    return 0;
}