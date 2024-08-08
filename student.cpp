#include "student.h"

student::student()
    : studentName(""), age(0) {}

std::string student::getStudentName() const
{
    return studentName;
}

void student::setStudentName(std::string newStudentName)
{
    studentName = newStudentName;
}

int student::getAge() const
{
    return age;
}

void student::setAge(int newAge)
{
    age = newAge;
}

