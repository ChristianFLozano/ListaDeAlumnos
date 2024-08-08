#pragma once
#include "group.h"
#include "student.h"
#include "Nodos.h"
class list
{
public:
	list();
	list(mainNode*);
	mainNode* header;
	mainNode* tail;
	secondaryNode* headerStudent;
	secondaryNode* tailStudent;
	void insertGroup(group);
	bool showGroups();
	bool isEmpty();
	void addStudent(int, student);
	bool showStudentsGroup(int);
};

