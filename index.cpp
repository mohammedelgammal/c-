#include <iostream>
#include <vector>
#include <limits.h>
#include <string.h>
using namespace std;

int main()
{
    const int num = 100;
    const int *ptr = &num;
    cout << "the value is: " << num << "and the memory address is: " << ptr;
    return 0;
}