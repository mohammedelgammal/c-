#include <iostream>
#include <memory>

using namespace std;

int main()
{
    string word = "mohammed elgammal";
    int firstSpaceIndex = word.find(' ');
    int lastSpaceIndex = word.rfind(' ') + 1;
    string firstName = word.substr(0, firstSpaceIndex);
    string lastName = word.substr(lastSpaceIndex);
    cout << firstName << endl;
    cout << lastName << endl;
    return 0;
}