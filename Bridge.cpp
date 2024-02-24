#include <iostream>
using namespace std;

class Activity
{
public:
    virtual void move(){};
    virtual void eat(){};
};

class FlyingCarnivorous : public Activity
{
public:
    void move() override
    {
        cout << "Flying..." << endl;
    }
    void eat() override
    {
        cout << "Eating meat..." << endl;
    }
};

class SwimmingCarnivorous : public Activity
{
public:
    void move() override
    {
        cout << "Swimming..." << endl;
    }
    void eat() override
    {
        cout << "Eating meat..." << endl;
    }
};

class Being
{
public:
    Being(Activity *activity) : activity{activity} {};
    void move()
    {
        activity->move();
    };
    void eat()
    {
        activity->eat();
    }

private:
    Activity *activity;
};

class Crocodile : public Being
{
public:
    Crocodile(Activity *activity) : Being(activity){};
    void hunt()
    {
        cout << "Hunting..." << endl;
    }
    void setLivingArea(const string area)
    {
        livingArea = area;
    }
    string getLivingArea()
    {
        return livingArea;
    }

private:
    string livingArea;
};

class Person : public Being
{
public:
    Person(Activity *activity) : Being(activity){};
    void study()
    {
        cout << "studying" << endl;
    }
};
