#include <iostream>
#include <iomanip>

using namespace std;

void increment(int &num)
{
    num++;
}

int main()
{
    int input = 1;
    cout << input << endl;
    increment(input);
    cout << input;
    return 0;
}