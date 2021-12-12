//
// Created by averagejoe on 12/6/21.
//

#ifndef LINKEDLISTS_STACK_H
#define LINKEDLISTS_STACK_H

#include <vector>
#include <exception>
#include <stdexcept>

template <class T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(T const &);

    void pop();

    T top();

    bool empty();

    //void out_of_range(const char *string);
};

//by creating a template class we can create Stack<int> intStack or Stack<std::string> stringStack
//this code is taken from stack overflow to be used as a learning process for data structures and templates.

#endif //LINKEDLISTS_STACK_H
