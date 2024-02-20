#include "Observer.hpp"

void Spreadsheet::update()
{
    cout << "Spreadsheet notified and updated" << endl;
}

void Chart::update()
{
    cout << "Chart notified and updated" << endl;
}