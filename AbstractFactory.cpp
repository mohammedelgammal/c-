#include <iostream>
using namespace std;

class Widget
{
    virtual void render();
};

class MaterialTextBox : public Widget
{
public:
    void render() override
    {
        cout << "rendered Material TextBox" << endl;
    }
};

class AntTextBox : public Widget
{
public:
    void render() override
    {
        cout << "rendered Ant TextBox" << endl;
    }
};

class WidgetFactory
{
public:
    virtual Widget *createTextBox()
    {
        return new Widget();
    };
};

class MaterialFactory : public WidgetFactory
{
public:
    MaterialTextBox *createTextBox() override
    {
        return new MaterialTextBox();
    }
};

class AntFactory : public WidgetFactory
{
public:
    AntTextBox *createTextBox() override
    {
        return new AntTextBox();
    }
};

class ContactForm
{
public:
    void renderForm(WidgetFactory *factory)
    {
        factory->createTextBox();
    }
};