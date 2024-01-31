#pragma once
#include <string> // include for using 'string'
#include <vector> // include for using vector
#include "Book.h" // include to our Book header file, to be able to use Book obj

using std::string; // saves the writing of std:: before every 'string'
using std::vector;

// header file for Member class
// all public methods including the constructor will be
// initialized in .cpp file
class Member
{
// public methods will be used in main function
public:
	// constructor that accepts 2 strings and an int
	Member(string name, int age, string memberID);

	// method to display Member information
	void display();

	// method to represent borrowin book, accepts poiner to Book object
	void borrowBook(Book* book);
private:
	vector<Book*> books; // collection of Book objects
	string name;
	int age;
	string memberID;
};

