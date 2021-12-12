//
// Created by averagejoe on 12/12/21.
//

#ifndef LINKEDLISTS_DOUBLYLL_H
#define LINKEDLISTS_DOUBLYLL_H


class doublyLL {
private:
    struct Node {
        int data;
        struct Node* next;
        struct Node* prev;
    };

public:
    doublyLL();

    void frontInsert();
    void specInsert();
    void backInsert();
    Node peekNode();
    void displayList();

};


#endif //LINKEDLISTS_DOUBLYLL_H
