#include <iostream>
using namespace std;

int main()
{
    int num = 3, numTwo = 5;
    const int *ptrcint; // pointer to a constant integer

    ptrcint = &num;
    ptrcint = &numTwo; // can make point to another int
    numTwo = 4;

    ptrcint = &numTwo;

    int *const cptrint = &num; // constant pointer to an integer
    // cptrint = &numTwo; // can point only to one int so it needs an initializer

    return 0;
}
