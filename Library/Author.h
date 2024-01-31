#pragma once
#include <string>

using namespace std;


class Author {
public:
	Author(string firstName, string lastName, string nationality);

	void setFirstName(string fName);
	void setLastName(string lName);
	void setNationality(string nationality);
	void printAuthor();

	string getFirstName();
	string getLastName();
	string getNationality();

private:
	string firstName;
	string lastName;
	string nationality;
};