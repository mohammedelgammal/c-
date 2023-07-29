#include "Student.hpp"
#include <iostream>

using namespace std;

void display_student_id(const shared_ptr<Student> student)
{
    cout << "Student ID: " << student->getID() << endl;
}

void display_student_name(const shared_ptr<Student> student)
{
    cout << "Student Name: " << student->getName() << endl;
}

void display_student_age(const shared_ptr<Student> student)
{
    cout << "Studen Age: " << student->getAge() << endl;
}

int main()
{

    // normal variables no pointers - using reference
    // const Student student_one = Student{17983, 16, "James Dean"};

    // normal variables using pointers
    // const Student *student_ptr = &student_one;

    // manually allocated variables using normal pointers
    // const Student *student_ptr = new Student{17983, 16, "James Dean"};

    // manually  allocated variables using smart pointers
    shared_ptr<Student> student_ptr = make_shared<Student>(124124, 16, "James Dean");

    cout << student_ptr << endl;

    display_student_id(student_ptr);
    display_student_name(student_ptr);
    display_student_age(student_ptr);

    // manually allocated variables using normal pointers deallocation
    // delete student_ptr;
    // student_ptr = nullptr;

    return 0;
}