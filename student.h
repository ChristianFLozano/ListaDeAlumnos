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
	float getAverage() const;
	void setAverage(float newAverage);
private:
	std::string studentName;
	int age;
	float average;
};

