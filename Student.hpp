#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student
{
public:
    static int get_count();
    Student(int ID, int age, string name);
    ~Student();
    // Getters
    int getID() const, getAge() const;
    string getName() const;
    // Setters
    void setID(const int &ID),
        setAge(const int &age),
        setName(const string &name);

private:
    static int count;
    int ID,
        age;
    string name;
};

#endif // STUDENT_HPP