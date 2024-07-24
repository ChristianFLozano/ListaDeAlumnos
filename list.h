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
	void insertGroup(group);
	bool showGroups();
};

