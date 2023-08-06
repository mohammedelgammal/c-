#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int getNumber()
{
    int number = 0;

    for (;;)
    {
        cout << "Enter target number: " << endl;
        cin >> number;
        if (!cin.fail())
            break;
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
    }

    return number;
}

unique_ptr<vector<int>> getMultiples(int number)
{
    unique_ptr<vector<int>> duplicates = make_unique<vector<int>>();
    int count = 1;
    while (count <= 200)
    {
        duplicates->push_back(number * count);
        count++;
    }
    return duplicates;
};

void displayDuplicates(unique_ptr<vector<int>> &duplicates, int columns)
{
    int count = 0;
    for (int number : *duplicates)
    {
        if (count % columns == 0)
        {
            cout << '\n';
        }
        cout << setw(5) << number << ' ';
        count++;
    }
}

int main()
{
    // get the number
    // get all the number duplicates till we reach the int limit
    // display the duplicates int 7 * 20 format

    int targetNumber = getNumber();
    unique_ptr<vector<int>> duplicates = getMultiples(targetNumber);
    displayDuplicates(duplicates, 10);

    return 0;
}