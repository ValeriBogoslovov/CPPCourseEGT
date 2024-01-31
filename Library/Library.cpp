#include "Library.h"
#include <iostream>

Library::Library() {}

Library::Library(Book book)
{
	this->addBook(book);
}

void Library::addBook(Book book)
{
	this->booksByGenre[book.getGenre()].push_back(book);
	
}

void Library::print()
{
	for (auto k : this->booksByGenre) {
		for (auto v : k.second) {
			v.print();
		}
	}
}

unordered_map<string, vector<Book>> Library::getBooksByGenre()
{
	return this->booksByGenre;
}

