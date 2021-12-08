//
// Created by averagejoe on 12/7/21.
//

#ifndef LINKEDLISTS_TLISTNODE_H
#define LINKEDLISTS_TLISTNODE_H

#include <vector>

template <class T>
class tListNode {
private:
//if you want to send a letter you need an address, if you want to find the nextNode, you need the address of that node -> listNode needs to be a pointer.
    std::vector<T> next;

public:
    tListNode();
    //template<typename K, typename V = list<K> >
    tListNode(T, std::vector<T> n);

    //getters
    std::vector<T> getNext();
    T getContent();
    void linkToNext(std::vector<T> n); //pointer for the link to the address

    //functions
    T peekFirst();
    T peekLast();
    void push (T data);
    T pop(); //dont use not finished
};


#endif //LINKEDLISTS_TLISTNODE_H
