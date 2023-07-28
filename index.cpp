#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

void to_double(double num)
{
    ostringstream stream;
    stream << fixed << setprecision(2) << num;
    cout << stream.str() << endl;
}

int main()
{
    double number = 46.8679442;
    to_double(number);
    return 0;
}