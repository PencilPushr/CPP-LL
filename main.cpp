#include <iostream>

#include "listNode.h"

int main() {

    listNode library("Great Expectations");
    library.push("The portrait of Dorian Grey.");
    library.push("The Great Gatsby");
    std::cout << "The last book in the library is: " << library.peekLast() << "\n";
    std::cout << "The first book in the library is: " << library.peekFirst() << "\n";


    return 0;
}
