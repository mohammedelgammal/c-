// Libraries
#include <iostream>

using namespace std;

#include "Prototype.cpp"

int main()
{
    Circle *circle = new Circle();
    ContextMenu *contextMenu = new ContextMenu();

    circle->setRadius(10);

    Circle *duplicateCircle = contextMenu->duplicate(circle);

    cout << duplicateCircle->getRadius() << endl;

    delete circle;
    delete contextMenu;
    circle = nullptr;
    contextMenu = nullptr;

    return 0;
}