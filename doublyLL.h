//
// Created by averagejoe on 12/12/21.
//

#ifndef LINKEDLISTS_DOUBLYLL_H
#define LINKEDLISTS_DOUBLYLL_H


class doublyLL {
private:

    template <typename T>
    struct Node {
        T data;
        struct Node* next;
        struct Node* prev;
    };

public:
    doublyLL();

    void frontInsert();
    void specInsert();
    void backInsert();
    void peekNode();
    void displayList();

};


#endif //LINKEDLISTS_DOUBLYLL_H
