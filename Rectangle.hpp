#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
public:
    Rectangle(int width, int height);

    int getWidth(),
        getHeight();

    void setWidth(int width),
        setHeight(int height);

    int getArea();

private:
    int width,
        height;
};

#endif // RECTANGLE_HPP