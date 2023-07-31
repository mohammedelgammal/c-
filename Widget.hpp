#ifndef WIDGET_HPP
#define WIDGET_HPP

class Widget
{
public:
    Widget() = default;
    Widget(int size, int position);

    int getSize() const;
    void setSize(int size);

    void enable();
    void disable();
    bool isEnabled() const;

private:
    int size = 0;

protected:
    int position = 0;
    bool isDisabled = false;
};

#endif // WIDGET_HPP