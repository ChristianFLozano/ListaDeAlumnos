#pragma once
#include "group.h"
#include "student.h"
class secondaryNode;

class mainNode {
public:
    mainNode(group info, mainNode* next = nullptr, mainNode* prev = nullptr);
    ~mainNode();

    mainNode* getNext() const;
    mainNode* getPrev() const;
    group& getInfo();
    secondaryNode* getStudent() const;
    void setStudent(secondaryNode* header);
    void setNext(mainNode* next);
    void setPrev(mainNode* prev);

private:
    mainNode* next;
    mainNode* prev;
    group info;
    secondaryNode* student;
};

class secondaryNode {
public:
    secondaryNode(student data, secondaryNode* next = nullptr, secondaryNode* prev = nullptr);
    ~secondaryNode();
    secondaryNode* getNext() const;
    secondaryNode* getPrev() const;
    student getData() const;
    void setNext(secondaryNode* next);
    void setPrev(secondaryNode* prev);
private:
    secondaryNode* next;
    secondaryNode* prev;
    student data;
};