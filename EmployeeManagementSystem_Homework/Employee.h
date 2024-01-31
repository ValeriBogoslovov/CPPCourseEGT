#pragma once
#include <string> // include for using 'string'

using std::string; // saves the writing of std:: before every 'string'

class Employee
{
// public methods will be used in main function and Departments class
public:
	// constructor with 3 parameters to initialize the Employee
	Employee(string name, string employeeID, string position);

	// method to display Employee information
	void display() const;

// private attributes, inaccesible outside the Employee class
private:
	// variables for holding data about the Employee
	string name;
	string employeeID;
	string position;
};

