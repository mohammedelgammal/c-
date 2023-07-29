#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
public:
    int getArea();
    // Getters
    int getWidth(),
        getHeight();
    // Setters
    void setWidth(int width),
        setHeight(int height);

private:
    int width,
        height;
};

#endif // RECTANGLE_HPP