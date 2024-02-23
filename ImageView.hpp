#ifndef IMAGEVIEW
#define IMAGEVIEW

#include <iostream>
#include <string>

using namespace std;

class Image
{
public:
    Image(const string src);
    string getSrc();

private:
    string src;
};

class Filter
{
public:
    Filter(const string name);
    string getName();
    virtual void apply(){};

private:
    string name;
};

class VividFilter : public Filter
{
public:
    VividFilter() : Filter("vivid filter") {}
    void apply();
};

class BlackWhiteFilter : public Filter
{
public:
    BlackWhiteFilter() : Filter("black & white filter") {}
    void apply();
};

class Blur
{
public:
    void intit();
    void render();
};

class BlurAdapter : public Filter
{
public:
    BlurAdapter() : Filter("blur filter"), blur{new Blur()} {};
    void apply();

private:
    Blur *blur;
};

class ImageView
{
public:
    ImageView(Image *image);
    void apply(Filter *filter);

private:
    Image *image;
};

#endif // IMAGEVIEW