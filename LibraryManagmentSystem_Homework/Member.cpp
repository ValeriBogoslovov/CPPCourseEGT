#include "Member.h"
// iostream needed to be able to output to the console
//info about the book in the display method
#include <iostream>

using std::cout;
using std::endl;
// initializing constructor, it takes 2 strings and an int
// as parameters representing the value that will be stored in our
// private attributes (name, age, memberID)
Member::Member(string name, int age, string memberID)
	: name(name), age(age), memberID(memberID)
{
}

// initializing display function, it will print to the console
// the information about Member object and the borrowed books
void Member::display()
{
	cout << "Member name: " << name << endl;
	cout << "Member age: " << age << endl;
	cout << "Member ID: " << memberID << endl;
	cout << "Borrowed books: ";
	// if the collection is empty print 0 books
	if (this->books.size() == 0)
	{
		cout << "0\n";
	}
	else {
		// if there are borrowed books, print the count
		cout << this->books.size() << endl << endl;
		// for each book in the collection we will print info about the book
		for (Book* b : this->books) {
			b->display();
		}
	}
}

// initializing borrowBook function, it will add to our collection
// pointer from Book object
void Member::borrowBook(Book* book)
{
	this->books.push_back(book);
}
