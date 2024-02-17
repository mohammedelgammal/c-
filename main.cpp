// Libraries
#include <iostream>

using namespace std;

#include "Document"
#include "CareTaker"
#include "Memento"

int main()
{
    Document document = Document();
    CareTaker careTaker = CareTaker();

    document.write("content one");
    careTaker.addMemento(document.createMemento());

    document.write("content two");
    careTaker.addMemento(document.createMemento());

    document.write("content three");
    careTaker.addMemento(document.createMemento());

    document.write("content four");
    careTaker.addMemento(document.createMemento());

    document.restoreFromMemento(careTaker.getMemento(0));

    cout << document.getContent();

    return 0;
}