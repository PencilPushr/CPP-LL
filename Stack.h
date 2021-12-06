//
// Created by averagejoe on 12/6/21.
//

#ifndef LINKEDLISTS_STACK_H
#define LINKEDLISTS_STACK_H

#include <vector>

template <class T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(T const &);

    void pop();

    T top();

    bool empty();
};

//by creating a template class we can create Stack<int> intStack or Stack<std::string> stringStack

#endif //LINKEDLISTS_STACK_H
