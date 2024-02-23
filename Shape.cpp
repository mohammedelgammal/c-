#include "Shape.hpp"

void Leaf::render()
{
    cout << "shape is rendered" << endl;
}

void Group::render()
{
    for (int i = 0; i < _shapes.size(); i++)
        _shapes[i]->render();
}

void Group::add(Shape *shape)
{
    _shapes.push_back(shape);
}