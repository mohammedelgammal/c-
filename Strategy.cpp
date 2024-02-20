#include "Strategy.hpp"

void Strategy::sort(const string content)
{
}

void BubbleSort::sort(const string content)
{
    cout << "bubble sorted " << content << endl;
}

void MergeSort::sort(const string content)
{
    cout << "merge sorted " << content << endl;
}

void Sort::sort(const string content)
{
    sortingStrategy->sort(content);
}

void Sort::setSortingStrategy(Strategy *strategy)
{
    this->sortingStrategy = strategy;
}
