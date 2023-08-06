#include <iostream>
#include <iomanip>

using namespace std;

int getInputNumber()
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

unique_ptr<vector<int>> getMultiples(int number, const int cols, const int rows)
{
    unique_ptr<vector<int>> multiples = make_unique<vector<int>>();
    const int elementsCount = cols * rows;
    int count = 1;

    while (count <= elementsCount)
    {
        multiples->push_back(number * count);
        count++;
    }

    return multiples;
}

void displayMultiples(unique_ptr<vector<int>> &multiples, int cols)
{
    int count = 0;
    for (int number : *multiples)
    {
        if (count % cols == 0)
        {
            cout << '\n';
        }
        cout << setw(5) << number;
        count++;
    }
}

void displayMultipleGrid(int number, int cols, int rows)
{
    cout << number || getInputNumber();
    int targetNumber = number ? number : getInputNumber();
    unique_ptr<vector<int>> multiples = getMultiples(targetNumber, cols, rows);
    displayMultiples(multiples, cols);
}

int main()
{
    int number = 7, cols = 20, rows = 5;

    displayMultipleGrid(number, cols, rows);

    return 0;
}