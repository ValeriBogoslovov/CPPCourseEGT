
#include <iostream>
#include "Book.h"
#include "Author.h"
#include "Library.h"

using namespace std;

int main()
{
    Author author1 ("Johnn", "Doe", "Austria");
    Author author3 ("Petko", "Todorov", "Bulgaria");
    Author author2 ("Mark", "Allan", "GB");

    Book b1(author1, "Book1", 1994, "Classic");
    Book b2(author2, "Book2", 1995, "Thriller");
    Book b3(author3, "Book3", 1996, "Bio");
    Book b4(author3, "Book4", 1996, "Classic");
    Library lib;

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);
    lib.addBook(b4);

    lib.print();

    return 69;
}

