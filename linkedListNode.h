//
// Created by averagejoe on 11/9/21.
//

#ifndef LINKEDLISTS_LINKEDLISTNODE_H
#define LINKEDLISTS_LINKEDLISTNODE_H

#include <iostream>
#include <string>
#include "listNode.h"

class linkedListNode {

private:
    listNode next;
    std::string content;

public:
    listNode(std::string s);
    listNode(std::string s, listNode n);

    listNode getNext();

};


#endif //LINKEDLISTS_LINKEDLISTNODE_H
