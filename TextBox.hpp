#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

class TextBox
{
public:
    TextBox();
    explicit TextBox(int value);
    int getValue();
    void setValue(int value);

private:
    int value = 0;
};

#endif // TEXTBOX_HPP