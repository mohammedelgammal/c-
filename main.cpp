// Libraries
#include <iostream>

using namespace std;

#include "Proxy.cpp"

int main()
{
    Image *image = new ProxyImage("image one");
    image->display();
    image->display();

    delete image;
    image = nullptr;

    return 0;
}