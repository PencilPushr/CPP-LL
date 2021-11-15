//
// Created by averagejoe on 11/9/21.
//
#include "listNode.h"

//needs to return a pointer, as we are returning the "address" of the next node
listNode* listNode::getNext() {
    return this->next;
}

//head of LL(the initial constructor)
listNode::listNode(std::string s) {
    this->content = s;
    this->next = nullptr;
}

//body of LL
listNode::listNode(std::string s, listNode* n) {
    this->content = s;
    this->next = n;
}

std::string listNode::getContent() {
    return std::string();
}
void listNode::linkToNext(listNode* n) {
    this->next = n;
}

void listNode::push (std::string s){
    std::cout << "Cheeseburger" << std::endl;
    if (this->next == nullptr) {
        // This is the end node.
        this->next = new listNode(s);
    } else {
        // This is NOT the end node
        this->next->push(s);
        //Go deeper, inception.jpg
    }
}

std::string listNode::peekFirst(){
    return this->content;
}

std::string listNode::peekLast(){
    std::cout << "Cheeseburger" << std::endl;
    if (this->next == nullptr) {
        // This is the end node.
        return this->content;
    } else {
        // This is NOT the end node
        return this->next->peekLast();
        //this returns listNode* and calls peeklast until it is the last node
    }
}

std::string listNode::pop(){
    // Not yet done
    return "Implementation Pending.";
}