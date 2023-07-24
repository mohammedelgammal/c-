#include <iostream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular = false;
};

int main()
{
    Movie terminatorOne = {"Terminator", 1985, true},
          terminatorTwo = {"Terminator 2", 1991, false},
          terminatorThree = {"Terminator 3", 1995, true};
    vector<Movie> terminator = {terminatorOne, terminatorTwo};
    terminator.push_back(terminatorThree);
    for (Movie &movie : terminator)
    {
        cout << movie.title << ", " << movie.releaseYear << endl;
    }
    return 0;
}