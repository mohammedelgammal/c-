#include <iostream>

using namespace std;

void prepareInput()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void getInput(int &variable, const string message, const int min, const int max)
{
    while (true)
    {
        cin >> variable;
        if (cin.fail())
        {
            cout << message << endl;
            prepareInput();
        }
        else if (variable < min || variable > max)
        {
            cout << "Number out of range!" << endl;
            prepareInput();
        }

        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
}

int main()
{
    int numOne = 0, numTwo = 0;
    const string message = "Please enter a valid number!";

    cout << "Please enter a number between 10 and 50" << endl;

    cout << "Enter your first number: " << endl;
    getInput(numOne, message, 10, 50);

    cout << "Enter your second number!" << endl;
    getInput(numTwo, message, 10, 50);

    cout << "You have entered " << numOne << " then " << numTwo << endl;

    return 0;
}