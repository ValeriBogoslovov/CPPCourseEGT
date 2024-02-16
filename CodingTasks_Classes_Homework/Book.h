#pragma once
#include <string>


class Book
{
//accessible members, functions
public:
	//constructor that accepts three parameters for title, author and pages
	Book(std::string title, std::string author, int pages);

	//function to display book information
	void display();
// nin-accessible members, functions
private:
	std::string title;
	std::string author;
	int pages;
};

