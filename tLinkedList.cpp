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
    //ptr ver -> (startPtr == NULL && endPtr == NUL)
    if (List.empty()){
        return true;
    } else
        return false;
}

template<typename T>
void tLinkedList<T>::insertBegin(T dataIn) {
    if(isEmpty()){ //if the list is empty create first element of the list
        List.push_back(dataIn);

        /* ListNode<T> * newPtr = new ListNode<T>(dataIn); //creates new node
         * startPtr = newPtr; //start and end pointer are same because there is only one object in list
         * endPtr = newPtr;
         */

    }else{ //if node(s) exist in list insert additional object before the first
        List.insert(List.begin(), dataIn);

        /* ListNode<T> * newPtr = new ListNode<T>(dataIn);
         * newPtr->nextPtr = startPtr; //the next pointer of the new node points to the node that was previously first
         * startPtr = newPtr; //the pointer for the new node is now the starting node
         */

    }
}

template<typename T>
void tLinkedList<T>::insertEnd(T dataIn) {
    if(isEmpty()){ //if the list is empty create first element of the list (same as first case in insert at begin)
        List.push_back(dataIn);
        /*
         * ListNode<T> * newPtr = new ListNode<T>(dataIn);
         * startPtr = newPtr;
         * endPtr = newPtr;
         */

    }else{ //if node(s) exist in the list then insert new node at the end of the list
        List.push_back(dataIn);
        /*
         * ListNode<T> * newPtr = new ListNode<T>(dataIn);
         * endPtr->nextPtr = newPtr; //the current last node's next pointer points to the new node
         * endPtr = newPtr; //the new node is now the last node in the list
         */
    }
}

template<typename T>
tListNode<T> tLinkedList<T>::getStartPtr() {
    //peak first -> steal from other code
    return List.front();
}

template<typename T>
tListNode<T> tLinkedList<T>::getEndPtr() {
    //peak last -> steal from other code
    return List.back();
}

template<typename T>
void tLinkedList<T>::insertNewNode(T dataIn) {
    if(isEmpty()){ //if there is no nodes in the list simply insert at beginning

        insertBegin(dataIn);
    }else //otherwise
    {               //dataIn < startPtr->data
        if(dataIn < List.peekFirst->data){ //if the data of the new object is less than the data of first node in list insert at beginning

            insertBegin(dataIn);
        }               //dataIn < endPtr->data
        else if(dataIn >= List.peekLast->data){ //if the data of the new object is greater than the data of last node in list insert at end

            insertEnd(dataIn);
        }
        else{ //the new node is being inserted in order but not at the beginning or end

            //tListNode<T> * currentPtr = &startPtr;
            //auto * newPtr = new tListNode<T>(dataIn); //creates new node
                //currentPtr != &endPtr

                //int i = 0;
                /*
            while(List.operator[](i) != List.end()){ //runs until the end of the list is reached
                    //(newPtr->data < currentPtr->nextPtr->data) && (newPtr->data >= currentPtr->data)
                if((List.insert(i, dataIn) < List.operator[](i)->data) && (List.insert(i, dataIn) >= List.operator[](i)->data)){ //if the data of the new node is less the data in the next node and greater than the data in the current node, insert after current node

                    tListNode<T> * next = currentPtr->nextPtr;
                    currentPtr->nextPtr = newPtr; //current nodes next pointer now points to the new node
                    newPtr->nextPtr = next; //the new nodes next pointer now points the node previously after the current node
                    break;
                }
                currentPtr = currentPtr->nextPtr; //moves to the next node in the list
                 */

            List.insert
                    (
                            std::upper_bound( List.begin(), List.end(), dataIn ),
                            dataIn
                    );

        }
    }
}

template<typename T>
void tLinkedList<T>::print() {

}

template<typename T>
tListNode<T>* tLinkedList<T>::search(T key) {
    //ListNode<T>* nodePtr;
    bool found = false;
    int i = 0;
    //nodePtr = startPtr;
                    //(nodePtr != NULL)
    while((!found) && (&List != NULL)) //runs through list until data is found within a node or end of list is reached
    {
        if(&List.operator[](i)->data == key) //if the node's data equals the key then the node has been found
            found = true;
        else
            &List.operator[](i)++;
            //nodePtr = nodePtr->nextPtr; //moves to next node in list
    }
    return &List.operator[](i); //returns pointer to the node that contains data equal to key (NULL if not found)
}
