//
// Created by averagejoe on 11/9/21.
//

#ifndef LINKEDLISTS_LINKEDLIST_H
#define LINKEDLISTS_LINKEDLIST_H

#include <iostream>
#include <string>
#include "listNode.h"

class linkedList {

public:
    listNode root;
    listNode tip;
    int length;

    //constructor
    linkedList();

    void add (std::string input);

    listNode(std::string s, listNode n);

    listNode getNext();

};


#endif //LINKEDLISTS_LINKEDLIST_H
