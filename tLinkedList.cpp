//
// Created by averagejoe on 12/15/21.
//

#include "tLinkedList.h"

template<typename T>
tLinkedList<T>::tLinkedList() {

}

template<typename T>
tLinkedList<T>::~tLinkedList() {

}

template<typename T>
bool tLinkedList<T>::isEmpty() {
    return false;
}

template<typename T>
void tLinkedList<T>::insertBegin(T) {

}

template<typename T>
void tLinkedList<T>::insertEnd(T) {

}

template<typename T>
void tLinkedList<T>::insertNewNode(T dataIn) {
    if(isEmpty()) //if there is no nodes in the list simply insert at beginning
    {
        insertBegin(dataIn);
    }else //otherwise
    {
        if(dataIn < List.peekFirst->data) //if the data of the new object is less than than the data of first node in list insert at beginning
        {
            insertBegin(dataIn);
        }
        else if(dataIn >= List.peekLast->data) //if the data of the new object is greater than than the data of last node in list insert at end
        {
            insertEnd(dataIn);
        }
        else //the new node is being inserted in order but not at the beginning or end
        {
            tListNode<T> * currentPtr = &startPtr;
            auto * newPtr = new tListNode<T>(dataIn); //creates new node
            while(currentPtr != &endPtr) //runs until the end of the list is reached
            {
                if((newPtr->data < currentPtr->nextPtr->data) && (newPtr->data >= currentPtr->data)) //if the data of the new node is less the data in the next node and greater than the data in the current node, insert after current node
                {
                    tListNode<T> * next = currentPtr->nextPtr;
                    currentPtr->nextPtr = newPtr; //current nodes next pointer now points to the new node
                    newPtr->nextPtr = next; //the new nodes next pointer now points the node previously after the current node
                    break;
                }
                currentPtr = currentPtr->nextPtr; //moves to the next node in the list
            }
        }
    }
}

template<typename T>
void tLinkedList<T>::print() {

}

template<typename T>
tListNode<T> *tLinkedList<T>::search(T) {
    return nullptr;
}
