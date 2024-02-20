#include "Observer.hpp"

void Spreadsheet::update(const string content)
{
    cout << "Spreadsheet notified and updated =====>>>" << content << endl;
}

void Chart::update(const string content)
{
    cout << "Chart notified and updated =====>>>" << content << endl;
}