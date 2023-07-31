#include "TextBox.hpp"
#include "Widget.hpp"
#include <iostream>

using namespace std;

void display_widget(int *widget)
{
    cout << &widget << endl;
    cout << boolalpha << *(widget).isEnabled() << endl;
}

int main()
{
    TextBox box_one{"one"};
    int box_ptr = &box_one;

    cout << &box_one << endl;
    display_widget(box_ptr);

    return 0;
}