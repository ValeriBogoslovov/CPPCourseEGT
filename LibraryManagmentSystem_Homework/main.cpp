// include header file to see Member class definition
// no need to include Book.h, since it is already included in Member.h

#include "Member.h"

// start of main function
int main() {
	// initializing 3 poiner variables for Book objects
	Book b1("Where's Molly", "H. D. Carlton", "524-1-6-253");
	Book b2("None of This Is True", "Lisa Jewell", "634-7-9-285");
	Book b3("Powerless", "Lauren Roberts", "384-9-2-822");

	Member m1("Valeri", 33, "635135");
	Member m2("Dancho", 20, "962827");
	Member m3("Viktor", 26, "832785");

	// initializing vector of Book objects to hold all books in the library
	// vector will hold pointer to each book
	vector<Book*> books;

	// initializing vector of Member objects to hold all members in the library
	vector<Member> members;

	// adding the Member objects to vector
	members.push_back(m1);
	members.push_back(m2);
	members.push_back(m3);

	// adding the Book objects to vector
	// using '&' before each object is to pass the memory address of each book
	books.push_back(&b1);
	books.push_back(&b2);
	books.push_back(&b3);

	// Member 1 will borrow 3rd book
	members[0].borrowBook(books[2]);
	// Member 2 will borrow 1st and 2nd book
	members[1].borrowBook(books[0]);
	members[1].borrowBook(books[1]);
	// Member 3 will not borrow any books

	// printing 
	for (Member m : members) {
		m.display();
	}
	// 0 will be printed when the program stops execution with no error
	return 0;
}
// end of main function

