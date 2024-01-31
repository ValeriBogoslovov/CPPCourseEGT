#include "Book.h"
// iostream needed to be able to output to the console
//info about the book in the display method
#include <iostream>

using std::cout;
using std::endl;

// initializing constructor, it takes 3 string parameters
// representing the value that will be stored in our
// private attributes (title, author, ISBN)
Book::Book(string title, string author, string ISBN)
	:title(title), author(author), ISBN(ISBN)
{
}

// initializing display function, it will print to the console
// the information about Book object
void Book::display() const
{
	cout << "Book title: " << this->title << endl;
	cout << "Book author: " << this->author << endl;
	cout << "ISBN: " << this->ISBN << endl << endl;
}
