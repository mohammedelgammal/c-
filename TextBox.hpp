#include <string>
using namespace std;

#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

class TextBox
{
public:
    TextBox() = default;
    explicit TextBox(const int &value);
    TextBox(const int &value, const string &color);
    TextBox(const TextBox &source);
    ~TextBox();
    int getValue();
    void setValue(const int &value);

private:
    int value = 0;
    string color;
};

#endif // TEXTBOX_HPP