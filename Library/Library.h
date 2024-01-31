#pragma once
#include <unordered_map>
#include "Book.h"

class Library {
public:
	Library();
	Library(Book book);

	
	void addBook(Book book);
	void print();

	unordered_map<string, vector<Book>> getBooksByGenre();

private:
	unordered_map<string, vector<Book>> booksByGenre;
};
