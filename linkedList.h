//
// Created by averagejoe on 11/9/21.
//

#ifndef LINKEDLISTS_LINKEDLIST_H
#define LINKEDLISTS_LINKEDLIST_H


#include "listNode.h"

class linkedList {

public:
    //globals
    listNode* root;
    listNode* tip;
    int length;

    //constructor
    linkedList();

    std::string peekFirst();
    std::string peekLast();
    void add(std::string s);
    void push (std::string s);
    std::string pop();

};


#endif //LINKEDLISTS_LINKEDLIST_H
