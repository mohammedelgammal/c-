// Libraries
#include <iostream>
#include "Subject.hpp"
#include "Observer.hpp"

using namespace std;

int main()
{
    DataSource *dataSource = new DataSource();
    Spreadsheet *sheet = new Spreadsheet();
    Chart *chart = new Chart();

    dataSource->registerObserver(sheet);
    dataSource->registerObserver(chart);

    dataSource->setContent("upated content");

    return 0;
}