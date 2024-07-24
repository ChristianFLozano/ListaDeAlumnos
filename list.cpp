#include "list.h"
#include <iomanip>
#include <iostream>
#include <sstream>

list::list()
{
	header = nullptr;
	tail = nullptr;
}

list::list(mainNode* ptr)
{
	header = ptr;
	tail = nullptr;
}

void list::insertGroup(group info)
{
	mainNode* newNode = new mainNode(info);
	if (header == nullptr)
	{
		header = newNode;
		tail = newNode;
	}
	else
	{
		tail->setNext(newNode);
		newNode->setPrev(tail);
		tail = newNode;
	}
}
bool list::showGroups()
{
	mainNode* aux = header;
	if (header == nullptr)
	{
		return false;
	}

	std::cout << std::left
		<< std::setw(20) << "Nombre del grupo"
		<< std::setw(10) << "Numero de alumnos"
		<< std::endl;
	std::cout << std::string(40, '-') << std::endl;

	while (aux != nullptr) {
		std::cout << std::left
			<< std::setw(20) << aux->getInfo().getNameGroup()
			<< std::setw(10) << aux->getInfo().getNumberStudent()
			<< std::endl;

		aux = aux->getNext();
	}
	return true;
}
;
