#include <iostream>

using namespace std;

struct Date
{
    short year = 1800,
        month = 1,
        day = 1;
};

struct Movie
{
    string title;
    Date releaseDate;
    bool isPopular = false;
};

int main()
{
    Movie terminatorOne = {"Terminator", {1983, 9, 4}, true},
          terminatorTwo = {"Terminator 2", {1991, 10, 3}, false},
          terminatorThree = {"Terminator 3", {1995, 1, 20}, true};
    vector<Movie> terminator = {terminatorOne, terminatorTwo};
    terminator.push_back(terminatorThree);
    for (Movie &movie : terminator)
    {
        cout << movie.title << ", " << movie.releaseDate.day << ", " << movie.releaseDate.month << ", " << movie.releaseDate.year << endl;
    }
    return 0;
}