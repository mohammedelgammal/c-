#include <fstream>

using namespace std;

int main()

{
    ofstream file;
    file.open("first.txt");
    if (file.is_open())
    {
        file << "Hey! I am here!" << endl;
        file.close();
    }
    return 0;
}