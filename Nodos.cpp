#include "Nodos.h"
mainNode::mainNode(group info, mainNode* next, mainNode* prev)
    : info(info), next(next), prev(prev), student(nullptr) {}

mainNode::~mainNode() {
    delete student;
}

mainNode* mainNode::getNext() const {
    return next;
}

mainNode* mainNode::getPrev() const {
    return prev;
}

group mainNode::getInfo() const {
    return info;
}

void mainNode::setNext(mainNode* next) {
    this->next = next;
}

void mainNode::setPrev(mainNode* prev) {
    this->prev = prev;
}

secondaryNode::secondaryNode(student data, secondaryNode* next, secondaryNode* prev)
    : data(data), next(next), prev(prev) {}

secondaryNode::~secondaryNode() {}

secondaryNode* secondaryNode::getNext() const {
    return next;
}

secondaryNode* secondaryNode::getPrev() const {
    return prev;
}

student secondaryNode::getData() const {
    return data;
}

void secondaryNode::setNext(secondaryNode* next) {
    this->next = next;
}

void secondaryNode::setPrev(secondaryNode* prev) {
    this->prev = prev;
}