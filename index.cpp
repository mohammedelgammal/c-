#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_string(double &number, const short precision)
{
    ostringstream stream;
    stream << fixed << setprecision(precision) << number;
    string output_string = stream.str();
    return output_string;
}

int main()
{
    double double_number = 4.9482;
    short precision = 2;
    cout << to_string(double_number, precision);
    return 0;
}