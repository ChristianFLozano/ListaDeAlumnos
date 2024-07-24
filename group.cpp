#include "group.h"

group::group()
{
	numberStudent = 0;
	name = "";
}

int group::getNumberStudent() const
{
	return numberStudent;
}

void group::setNumberStudent(int newNumber)
{
	numberStudent = newNumber;
}

std::string group::getNameGroup() const
{
	return name;
}

void group::setNameGroup(std::string newName)
{
	name = newName;
}


