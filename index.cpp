#include "TextBox.hpp"
#include <iostream>

using namespace std;

void display_box(const TextBox &box)
{
    cout << "New box address is: " << &box << endl;
}

int main()
{
    TextBox box_one{20};
    display_box(box_one);
    cout << "Old box address is: " << &box_one << endl;
    return 0;
}