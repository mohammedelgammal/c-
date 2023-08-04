#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct Fraction
{
    int numerator = 0, denominator = 0;
    string numerator_str, denominator_str;
};

unique_ptr<Fraction> getFraction(const bool isFirstInput)
{
    unique_ptr<Fraction> fraction = make_unique<Fraction>();

    cout << "Please enter the "
         << (isFirstInput ? "first" : "second")
         << "fraction: " << endl;

    getline(cin, fraction->numerator_str, '/');
    getline(cin, fraction->denominator_str);

    fraction->numerator = stoi(fraction->numerator_str);
    fraction->denominator = stoi(fraction->denominator_str);

    return fraction;
}

unique_ptr<Fraction> sumUpFractions(unique_ptr<Fraction> &firstFraction, unique_ptr<Fraction> &secondFraction)
{
    unique_ptr<Fraction> sumFraction = make_unique<Fraction>();
    sumFraction->numerator = firstFraction->numerator * secondFraction->denominator +
                             firstFraction->denominator * secondFraction->numerator;
    sumFraction->denominator = firstFraction->denominator * secondFraction->denominator;

    return sumFraction;
}

int main()
{
    unique_ptr<Fraction> firstFraction = getFraction(true);
    unique_ptr<Fraction> secondFraction = getFraction(false);

    unique_ptr<Fraction> sumFraction = sumUpFractions(firstFraction, secondFraction);

    cout << "Sum = "
         << sumFraction->numerator
         << "/"
         << sumFraction->denominator << endl;

    return 0;
}
