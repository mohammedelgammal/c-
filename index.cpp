#include <fstream>

using namespace std;

int main()

{
    ofstream file;

    file.open("data.csv");
    if (file.is_open())
    {
        file << "id,title,year\n"
             << "1, Terminator 1, 1984\n"
             << "2, Terminator 2, 1991\n";
        file.close();
    }

    return 0;
}