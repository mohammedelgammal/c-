#ifndef SHAPE
#define SHAPE

#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
    virtual void render(){};
};

class Leaf : public Shape
{
public:
    void render() override;
};

class Group : public Shape
{
public:
    void render() override;
    void add(Shape *shape);

private:
    vector<Shape *> _shapes;
};

#endif // SHAPE