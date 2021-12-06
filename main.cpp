#include <iostream>

#include "listNode.h"
#include "Stack.h"

int main() {

    listNode library("Great Expectations");
    library.push("The portrait of Dorian Grey.");
    library.push("The Great Gatsby");
    std::cout << "The last book in the library is: " << library.peekLast() << "\n";
    std::cout << "The first book in the library is: " << library.peekFirst() << "\n";


    Stack<int> intStack;       // Stack of ints
    Stack<std::string> stringStack; // Stack of strings

    return 0;
}
