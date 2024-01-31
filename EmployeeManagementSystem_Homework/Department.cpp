#include "Department.h"
// iostream needed to be able to output to the console
//info about the Department in the displayEmployees method
#include <iostream>

using std::cout;
using std::endl;

// initializing constructor, it takes a string 
// representing the value that will be stored in our
// private attribute departmentName
Department::Department(string departmentName) : departmentName(departmentName)
{
}

// initializing display function, it will print to the console all the employees in the department
void Department::displayEmployees() const
{
	cout << "Department name: " << this->departmentName << endl;
	cout << "Employees count: " << getNumEmployees() << endl;

	// iterating through our collection of employees and printing information about them
	for (Employee* e : this->employees) {
		e->display();
	}
}


void Department::addEmployee(Employee* employee)
{
	// adding employee to the collection
	this->employees.push_back(employee);

	// incrementing the numEmployees counter by one each time a new employee is added
	this->numEmployees++;
}

// initializing the method that will return the number of employees
// in the department, this attribute increments in the addEmoloyee method above
int Department::getNumEmployees() const
{
	return this->numEmployees;
}
