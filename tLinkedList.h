//
// Created by averagejoe on 12/15/21.
//

#ifndef LINKEDLISTS_TLINKEDLIST_H
#define LINKEDLISTS_TLINKEDLIST_H
#include "tListNode.h"

template <typename T>
class tLinkedList {

private:
    //Ptr VER:
    //tListNode<T> *startPtr; //stores the pointer of first object in the linked list
    //tListNode<T> *endPtr; //stored the pointer of the last object in the linked list

    //Vector VER:
    std::vector<tListNode<T>> List;
    
    bool isEmpty(); //utility functions used to see if the list contains no elements
    void insertBegin(T); //inserts new node before the first node in the list
    void insertEnd(T); //inserts new node after the last node in the list

public:
    tLinkedList();
    ~tLinkedList();
    void insertNewNode(T); //fucntion used to insert new node in order in the list
    void print(); //prints the contents of the linked list
    tListNode<T>* search(T); //searches for a value in the linked list and returns the point to object that contains that value
    tListNode<T> getEndPtr();
    tListNode<T> getStartPtr();

};


#endif //LINKEDLISTS_TLINKEDLIST_H
