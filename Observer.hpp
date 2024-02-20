#ifndef OBSERVER
#define OBSERVER

#include <iostream>
using namespace std;

class Observer
{
public:
    virtual void update(){};
};

class Spreadsheet : public Observer
{
public:
    void update() override;
};

class Chart : public Observer
{
public:
    void update() override;
};

#endif // OBSERVER