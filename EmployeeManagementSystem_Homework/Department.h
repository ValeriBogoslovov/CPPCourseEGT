#pragma once
#include <string> // include for using 'string'
#include <vector>
#include "Employee.h"

using std::string; // saves the writing of std:: before every 'string'
using std::vector;

class Department
{
	// public methods will be used in main function
public:
	// constructor that accepts 1 string for the name of the Department
	Department(string departmentName);

	// method to display all employees in the departments
	void displayEmployees() const; // used so that no attribute can be changed

	// method to add the address of an Employee object to out 
	// collection vector<Employee*> employees
	void addEmployee(Employee* employee);

	// method to get number of employees
	int getNumEmployees() const; // used so that no attribute can be changed

	// private member attributes
private:
	string departmentName;

	// this will be collection that will keep memory addresses of Employee objects
	vector<Employee*> employees;

	// initializing the number of employees and giving initial value
	// of 0, since each depatments starts with 0 employees
	int numEmployees = 0;
};

