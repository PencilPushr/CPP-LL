//
// Created by averagejoe on 11/9/21.
//

#ifndef LINKEDLISTS_LISTNODE_H
#define LINKEDLISTS_LISTNODE_H

#include <iostream>
#include <string>

class listNode {

private:
    listNode next;
    std::string content;

public:
    listNode(std::string s);
    listNode(std::string s, listNode n);

    listNode getNext();

};


#endif //LINKEDLISTS_LISTNODE_H
