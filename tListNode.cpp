//
// Created by averagejoe on 12/7/21.
//

#include "tListNode.h"

template<class T>
tListNode<T>::tListNode() {

}

template<class T>
tListNode<T>::tListNode(T, std::vector<T> n) {

}

template<class T>
T tListNode<T>::getContent() {
    return nullptr;
}

template<class T>
T tListNode<T>::peekFirst() {
    return nullptr;
}

template<class T>
std::vector<T> tListNode<T>::getNext() {
    return std::vector<T>();
}

template<class T>
void tListNode<T>::linkToNext(std::vector<T> n) {

}

template<class T>
T tListNode<T>::peekLast() {
    return nullptr;
}

template<class T>
void tListNode<T>::push(T data) {
    if (this->next == nullptr) {
        // This is the end node.
        this->next = new tListNode(data);
    }else{

    }
}

template<class T>
T tListNode<T>::pop() {
    return nullptr;
}
