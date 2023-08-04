#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Fraction
{
    string numerator_str, denominator_str;
    int numerator, denominator;
};

const unique_ptr<Fraction> getFraction(const bool isFirst)
{
    unique_ptr<Fraction> fraction = make_unique<Fraction>();
    stringstream ss;

    cout << "Please enter the " << (isFirst ? "first" : "second") << " fraction" << endl;

    getline(cin, fraction->numerator_str, '/');
    getline(cin, fraction->denominator_str);

    fraction->numerator = stoi(fraction->numerator_str);
    fraction->denominator = stoi(fraction->denominator_str);

    return fraction;
}

const unique_ptr<string> sumUpFraction(const unique_ptr<Fraction> &firstFraction, const unique_ptr<Fraction> &secondFraction)
{
    stringstream ss;
    unique_ptr<string> sumFractionString = make_unique<string>();
    unique_ptr<Fraction> sumFraction = make_unique<Fraction>();

    sumFraction->numerator = firstFraction->numerator * secondFraction->denominator + firstFraction->denominator * secondFraction->numerator;
    sumFraction->denominator = firstFraction->denominator * secondFraction->denominator;

    ss << sumFraction->numerator << '/' << sumFraction->denominator;
    *sumFractionString = ss.str();

    return sumFractionString;
}

int main()
{
    const unique_ptr<Fraction> firstFraction = getFraction(true);
    const unique_ptr<Fraction> secondFraction = getFraction(false);

    const unique_ptr<string> sumFractionString = sumUpFraction(firstFraction, secondFraction);

    cout << "Sum = " << *sumFractionString << endl;

    return 0;
}