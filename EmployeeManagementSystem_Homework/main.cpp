// include header file to see Department class definition
// no need to include Employee.h, since it is already included in Department.h

#include "Department.h"

// start of main function
int main() {
	// initializing 3 poiner variables for Employee objects
	Employee* e1Ptr = new Employee("Valeri Bogoslovov", "143264", "Junior C++ developer");
	Employee* e2Ptr = new Employee("Fatme Ali", "143265", "Mid-Level C++ developer");
	Employee* e3Ptr = new Employee("Zahari Baharov", "143266", "Senior C++ developer");

	// initializing Department object
	Department d("Slots Games");
	// adding employees to the department
	d.addEmployee(e1Ptr);
	d.addEmployee(e2Ptr);
	d.addEmployee(e3Ptr);

	// print information about the employees in the department
	d.displayEmployees();

	// delete pointer variables
	delete(e1Ptr);
	delete(e2Ptr);
	delete(e3Ptr);
	// 0 will be printed to the console if the program reaches below line
	return 0;
}
//end of main function