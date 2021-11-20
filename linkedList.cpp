//
// Created by averagejoe on 11/9/21.
//
#include "linkedList.h"


linkedList::linkedList() {
    this->length = 0;
    this->root = nullptr;
    this->tip = nullptr;
}

void linkedList::add(std::string input) {
    //add a check to see if it is the first insert -> insert into root
    if (this->root == nullptr){
        this->root = new listNode(input);
        this->tip = this->root;
    }else{
        listNode* temp = new listNode(input);
        this->tip->push(input);
    }

}

std::string linkedList::peekFirst(){
    return this->root->peekFirst();
}

std::string linkedList::peekLast(){
    return this->tip->peekLast();
}

void linkedList::push(std::string s){

}

std::string linkedList::pop(){
    //check to see if root is empty, can't pop anything off otherwise
    if (this->root == nullptr){
        return "Linked List is empty; Nothing to pop off";
    }else{
        this->tip = nullptr;
    }

    //get the value of the tip before it, set the tip to the value, and then set
}
