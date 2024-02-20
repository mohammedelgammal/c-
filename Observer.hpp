#ifndef OBSERVER
#define OBSERVER

#include <iostream>
using namespace std;

class Observer
{
public:
    virtual void update(const string content){};
};

class Spreadsheet : public Observer
{
public:
    void update(const string content) override;
};

class Chart : public Observer
{
public:
    void update(const string content) override;
};

#endif // OBSERVER