#include "ImageView.hpp"

Image::Image(const string src) : src{src} {}

string Image::getSrc()
{
    return src;
}

Filter::Filter(const string name) : name{name} {}

string Filter::getName()
{
    return name;
}

ImageView::ImageView(Image *image) : image{image} {}

void ImageView::apply(Filter *filter)
{
    filter->apply();
}

void VividFilter::apply()
{
    cout << "Applied " << getName() << endl;
}

void BlackWhiteFilter::apply()
{
    cout << "Applied " << getName() << endl;
}

void Blur::intit()
{
    cout << "Initializing blur filter" << endl;
}

void Blur::render()
{
    cout << "Rendering blur filter" << endl;
}

void BlurAdapter::apply()
{
    blur->intit();
    blur->render();
    cout << "Applied " << getName() << endl;
}