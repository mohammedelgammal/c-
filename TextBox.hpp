#include <string>
using namespace std;

#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

class TextBox
{
public:
    static int get_instances_count();

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

    static int instances_count;
};

#endif // TEXTBOX_HPP