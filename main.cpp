#include "Student.hpp"
#include <iostream>

using namespace std;

void display_student_id(const Student *student)
{
    cout << "Student ID: " << student->getID() << endl;
}

void display_student_name(const Student *student)
{
    cout << "Student Name: " << student->getName() << endl;
}

void display_student_age(const Student *student)
{
    cout << "Studen Age: " << student->getAge() << endl;
}

int main()
{
    Student *student_ptr = new Student(19856, 16, "James Dean");

    display_student_id(student_ptr);
    display_student_name(student_ptr);
    display_student_age(student_ptr);

    delete student_ptr;
    student_ptr = nullptr;

    return 0;
}