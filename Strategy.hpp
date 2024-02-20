#ifndef STRATEGY
#define STRATEGY

#include <iostream>
using namespace std;

class Strategy
{
public:
    virtual void sort(const string content);
};

class BubbleSort : public Strategy
{
public:
    void sort(const string content) override;
};

class MergeSort : public Strategy
{
public:
    void sort(const string content) override;
};

class Sort
{
public:
    void sort(const string content);
    void setSortingStrategy(Strategy *strategy);

private:
    Strategy *sortingStrategy;
};

#endif // STRATEGY