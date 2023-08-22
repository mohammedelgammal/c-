#include <ostream>
#include "AlphaBeta"

using namespace std;

int Beta::total = 0;

int main()
{
    Alpha alpha;
    Beta beta;

    extern int global_var;

    int age;

    Beta::getInstances();

    cout << "global: " << global_var << endl;

    return 0;
}