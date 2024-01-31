#pragma once
#include <string>
#include <vector>
#include "Author.h"
using namespace std;

class Book {
public:
	Book(Author author, string bookName, int yearOfPublish, string genre);

	void setBookName(string bookName);
	void setYearOfPublish(int year);
	void setGenre(string genre);
	void print();

	string getBookName();
	int getYearOfPublish();
	string getGenre();

private:
	Author author;
	string bookName;
	int yearOfPublish;
	string genre;
};