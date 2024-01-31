#include "Employee.h"
// iostream needed to be able to output to the console
//info about the Employee in the display method
#include <iostream>

// saves time writing each time std::cout or std::endl
using std::cout;
using std::endl;

// initializing constructor, it takes 3 string parameters
// representing the value that will be stored in our
// private attributes (name, employeeID, position)
Employee::Employee(string name, string employeeID, string position)
	:name(name), employeeID(employeeID), position(position)
{
}

// initializing display function, it will print to the console
// the information about Employee object
void Employee::display() const
{
	cout << "Employee info: " << endl;
	cout << "  Name: " << name << endl;
	cout << "  ID: " << employeeID << endl;
	cout << "  Position: " << position << endl << endl;
}
