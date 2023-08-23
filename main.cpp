#include <ostream>
#include "AlphaBeta"
#include <string>

using namespace std;

// int Beta::total = 0;

int main()
{
    Alpha alpha;
    // Beta beta;

    extern int global_var;
    int sum(int a, int b);
    string name = "howard";

    int age;

    // Beta::getInstances();

    cout << "global: " << sum(1, 4) << endl;

    cout << "W index is: " << name.find('w') << endl;

    return 0;
}