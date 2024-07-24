#pragma once
#include <string>

class group
{
public:
	group();
	int getNumberStudent() const;
	void setNumberStudent(int newNumber);
	std::string getNameGroup() const;
	void setNameGroup(std::string newName);
private:
	int numberStudent;
	std::string name;
};

