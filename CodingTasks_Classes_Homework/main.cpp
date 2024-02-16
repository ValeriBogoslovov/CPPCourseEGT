#include <iostream>

// include the Book header to have access to the class
#include "Book.h"



int main()
{
    // create Book objects
    Book b1("First Book", "Valeri", 152);
    Book b2("Second Book", "Valeri", 390);
    Book b3("First Book", "Valeria", 274);

    // call book function display
    b1.display();
    b2.display();
    b3.display();

    // add empty line at the end
    std::cout << std::endl;

    // if the program exists withouth errors 0 will be printed to the console
    return 0;
}

