#include <iostream>
#include <string>

using namespace std;

int& returnStringRef() {
    return 7;
}

int main()
{
    int& stringRef = returnStringRef();
    return 1;
}
