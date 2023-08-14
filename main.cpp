#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Hello from A \n";
    }
};

class B : virtual public A
{
public:
    // void show()
    // {
    //     cout << "Hello from B" << endl;
    // }
};

class C : virtual public A
{
public:
    // void show()
    // {
    //     cout << "Hello from C" << endl;
    // }
};

class D : public B, public C
{
public:
    // void show()
    // {
    //     cout << "Hello from D" << endl;
    // }
};

int main()
{
    D object;
    object.show();
}
