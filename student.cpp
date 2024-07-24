#include "student.h"

student::student()
    : studentName(""), age(0), average(0.0f) {}

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

float student::getAverage() const
{
    return average;
}

void student::setAverage(float newAverage)
{
    average = newAverage;
}

