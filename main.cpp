// Libraries
#include <iostream>

#include "Shape.hpp"

using namespace std;

int main()
{
    Leaf *circle = new Leaf();
    Leaf *square = new Leaf();
    Leaf *triangle = new Leaf();

    Group *groupOne = new Group();
    Group *groupTwo = new Group();

    groupOne->add(circle);
    groupOne->add(square);

    groupTwo->add(square);
    groupTwo->add(triangle);

    groupTwo->add(groupOne);

    groupTwo->render();

    return 0;
}