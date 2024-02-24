#include <iostream>

using namespace std;

class Shape
{
protected:
    virtual Shape *clone()
    {
        return new Shape();
    };
};

class Circle : public Shape
{
public:
    Circle *clone() override
    {
        Circle *newCircle = new Circle();
        newCircle->setRadius(radius);
        return newCircle;
    };
    void setRadius(int radius)
    {
        this->radius = radius;
    }
    int getRadius()
    {
        return radius;
    }

private:
    int radius;
};

class ContextMenu
{
public:
    Circle *duplicate(Circle *circle)
    {
        return circle->clone();
    }
};