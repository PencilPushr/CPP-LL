//
// Created by averagejoe on 12/6/21.
//

#include "Stack.h"

template<class T>
void Stack<T>::push(const T &elem) {
    elements.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    } else {
        elements.pop_back();
    }
}

template <class T>
T Stack<T>::top() {
    if (empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template <class T>
bool Stack<T>::empty() {
    return elements.empty();
}

