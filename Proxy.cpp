#include <iostream>

using namespace std;

class Image
{
public:
    virtual void display() {}
};

class RealImage : public Image
{
public:
    RealImage(const string fileName) : fileName{fileName}
    {
        loadFromDisk();
    }
    void loadFromDisk()
    {
        cout << "Loading " << fileName << " from disk..." << endl;
    };
    void display() override
    {
        cout << "display " << fileName << endl;
    }

private:
    string fileName;
};

class ProxyImage : public Image
{
public:
    ProxyImage(const string fileName) : fileName{fileName} {}
    ~ProxyImage()
    {
        delete realImage;
        realImage = nullptr;
    }
    void display() override
    {
        if (realImage == nullptr)
            realImage = new RealImage(fileName);
        realImage->display();
    }

private:
    RealImage *realImage = nullptr;
    string fileName;
};