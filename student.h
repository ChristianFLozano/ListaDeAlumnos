#pragma once
#include <string>
class student
{
public:
	student();
	std::string getStudentName() const;
	void setStudentName(std::string newStudentName);
	int getAge() const;
	void setAge(int newAge);
private:
	std::string studentName;
	int age;
};

