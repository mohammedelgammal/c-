// Libraries
#include <iostream>
#include "Strategy.hpp"

using namespace std;

int main()
{
    Sort sorter;
    const string content = "input";

    sorter.setSortingStrategy(new BubbleSort());
    sorter.sort(content);

    sorter.setSortingStrategy(new MergeSort());
    sorter.sort(content);

    return 0;
}