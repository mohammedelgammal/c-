// Libraries
#include <iostream>

using namespace std;

#include "Iterator"

int main()
{
    BrowserHistory *history = new BrowserHistory();

    ListIterator *iterator = history->getIterator(history);
    history->add("history one");
    history->add("history two");
    history->add("history three");
    history->add("history four");

    history->pop();

    while (iterator->hasNext())
    {
        cout << iterator->getCurrent() << endl;
        iterator->next();
    }

    return 0;
}