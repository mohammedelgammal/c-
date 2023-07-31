#include "TextBox.hpp"
#include "Widget.hpp"
#include <iostream>

using namespace std;

void display_widget(Widget &widget)
{
    widget.draw();
}

int main()
{
    TextBox box_one{"one"};

    display_widget(box_one);

    return 0;
}