#pragma once
#include <string> // include for using 'string'

using std::string; // saves the writing of std:: before every 'string'

// header file for Book class
// all public methods including the constructor will be
// initialized in .cpp file
class Book
{
// public methods will be used in main function
public:
	// constructor that accepts 3 strings
	Book(string title, string author, string ISBN);
	// method to display Book information
	void display() const; 

// private member attributes all of them are of type 'string'
private:
	string title;
	string author;
	string ISBN;
};

