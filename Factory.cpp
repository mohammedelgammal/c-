#include <iostream>
using namespace std;

class CoverMaker
{
public:
    virtual void makeCover() {}
};

class PlasticCoverMaker : public CoverMaker
{
public:
    void makeCover() override { cout << "Make plastic cover" << endl; }
};

class HardCoverMaker : public CoverMaker
{
public:
    void makeCover() override { cout << "Make hard cover" << endl; }
};

class Printer
{
public:
    Printer() : coverMaker{createCover()} {}
    void printBook()
    {
        coverMaker->makeCover();
        cout << "Printing content" << endl;
    }

protected:
    virtual CoverMaker *createCover()
    {
        return new HardCoverMaker();
    }

private:
    CoverMaker *coverMaker;
};

class PlasticPrinter : public Printer
{
    PlasticPrinter() : Printer(){};

private:
    CoverMaker *createCover() override
    {
        return new PlasticCoverMaker();
    }
};
