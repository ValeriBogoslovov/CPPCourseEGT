#include "Book.h"
#include <iostream>

// constructor and members initialization
Book::Book(std::string title, std::string author, int pages)
	:title(title), author(author), pages(pages){}

// display function initialization
void Book::display()
{
	// print on the console
	std::cout << "Book title: " << this->title
		<< "\n\tBook author: " << this->author
		<< "\n\tBook pages: " << this->pages
		<< std::endl;
}
