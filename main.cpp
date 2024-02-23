// Libraries
#include <iostream>

#include "ImageView.hpp"

using namespace std;

int main()
{
    Image image = Image("image one");
    VividFilter vividFilter = VividFilter();
    BlackWhiteFilter blackWhiteFilter = BlackWhiteFilter();
    BlurAdapter blurAdapter = BlurAdapter();
    ImageView imageView = ImageView(&image);

    imageView.apply(&blurAdapter);

    return 0;
}