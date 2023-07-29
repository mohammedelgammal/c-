#include "Student.hpp"
#include <iostream>
#include <string>

using namespace std;

Student::Student(int ID, int age, string name)
{
    setID(ID);
    setAge(age);
    setName(name);
    count++;
}

int Student::count = 0;

Student::~Student()
{
    count--;
}

int Student::get_count()
{
    return count;
}

void Student::setID(const int &ID)
{
    if (ID < 0)
    {
        throw invalid_argument("ID");
    }
    this->ID = ID;
}
void Student::setAge(const int &age)
{
    if (age <= 10)
    {
        throw invalid_argument("age");
    }
    this->age = age;
}
void Student::setName(const string &name)
{
    if (name.empty())
    {
        throw invalid_argument("name");
    }
    this->name = name;
}

int Student::getID() const
{
    return this->ID;
}
int Student::getAge() const
{
    return this->age;
}
string Student::getName() const
{
    return this->name;
}