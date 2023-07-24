#include <iostream>

using namespace std;

int main()
{
    int maxCapacity = 5;
    int *numbers = new int[maxCapacity];
    int entries = 0;
    while (true)
    {
        cout << "Number: " << endl;
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        if (entries > maxCapacity)
        {
            maxCapacity *= 2;
            int *temp = new int[maxCapacity];
            for (int i = 0; i < entries; i++)
            {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;
            temp = nullptr;
        }
    }
    for (int i = 0; i < entries; i++)
    {
        cout << numbers[i] << endl;
    }
    delete[] numbers;
    numbers = nullptr;

    return 0;
}