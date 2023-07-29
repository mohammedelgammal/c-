#include "TextBox.hpp"
#include <iostream>

using namespace std;

void display_box(const TextBox &box)
{
    cout << "New box address is: " << &box << endl;
}

int main()
{
    TextBox box_one{20, "blue"};
    display_box(box_one);
    cout << "box one value is: " << box_one.getValue() << endl;
    return 0;
}