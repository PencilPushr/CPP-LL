//
// Created by averagejoe on 11/9/21.
//

#ifndef LINKEDLISTS_LISTNODE_H
#define LINKEDLISTS_LISTNODE_H

#include <iostream>
#include <string>
#define output std::cout

class listNode {

private:
//if you want to send a letter you need an address, if you want to find the nextNode, you need the address of that node -> listNode needs to be a pointer.
    listNode * next;
    std::string content;

public:
    listNode(std::string s);
    listNode(std::string s, listNode* n);

    //getters
    listNode* getNext();
    std::string getContent();
    void linkToNext(listNode* n); //pointer for the link to the address

    //functions
    std::string peekFirst();
    std::string peekLast();
    void push (std::string s);
    std::string pop(); //dont use not finished

};


#endif //LINKEDLISTS_LISTNODE_H