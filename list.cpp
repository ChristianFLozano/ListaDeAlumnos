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
	int cont = 0;
	if (header == nullptr)
	{
		return false;
	}

	std::cout << std::left
		<< std::setw(5) << "N°"
		<< std::setw(20) << "Nombre del grupo"
		<< std::setw(10) << "Numero de alumnos"
		<< std::endl;
	std::cout << std::string(40, '-') << std::endl;

	while (aux != nullptr) {
		std::cout << std::left
			<< std::setw(5) << cont
			<< std::setw(20) << aux->getInfo().getNameGroup()
			<< std::setw(10) << aux->getInfo().getNumberStudent()
			<< std::endl;
		cont++;
		aux = aux->getNext();
	}
	return true;
}
bool list::isEmpty()
{
	if (header == nullptr)
	{
		return true;
	}
	return false;
}
void list::addStudent(int group, student data) {
	secondaryNode* newStudent = new secondaryNode(data);
	mainNode* aux = header;
	std::cout << newStudent->getData().getStudentName() << std::endl;
	for (int i = 0; i < group; ++i) {
		if (aux->getNext() != nullptr) {
			aux = aux->getNext();
		}
	}
	if (aux->getStudent() == nullptr) {
		aux->setStudent(newStudent);
		int oldNumber = aux->getInfo().getNumberStudent();
		std::cout << oldNumber << " This is" << std::endl;
		int newNumber = oldNumber + 1;
		std::cout << newNumber << std::endl;
		aux->getInfo().setNumberStudent(newNumber);
	}
	else {
		secondaryNode* auxSecondary = aux->getStudent();
		while (auxSecondary->getNext() != nullptr) {
			auxSecondary = auxSecondary->getNext();
		}
		auxSecondary->setNext(newStudent);
		newStudent->setPrev(auxSecondary);
		int oldNumber = aux->getInfo().getNumberStudent();
		std::cout << oldNumber << " This is" << std::endl;
		int newNumber = oldNumber + 1;
		std::cout << newNumber << std::endl;
		aux->getInfo().setNumberStudent(newNumber);
	}
}

bool list::showStudentsGroup(int group)
{
	mainNode* aux = header;
	int i = 0, studentCont = 1;
	while (i > group)
	{
		aux = aux->getNext();
		i++;
	}
	if (aux->getStudent() == nullptr)
	{
		return false;
	}
	else
	{
		secondaryNode* auxStudent = aux->getStudent();
		while (auxStudent != nullptr)
		{
			std::cout << std::left << std::setw(5) << "N°" << std::setw(50) << "Nombre" << std::setw(5) << "Edad" << std::endl;
			std::cout << std::left << std::setw(5) << studentCont << std::setw(50) << auxStudent->getData().getStudentName()
					<< std::setw(5) << auxStudent->getData().getAge() << std::endl;
			auxStudent = auxStudent->getNext();
			studentCont++;
		}
		return true;
	}
	
}


