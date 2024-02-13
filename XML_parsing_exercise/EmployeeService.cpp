#include "EmployeeService.h"
#include <iostream>

pugi::xml_document  EmployeeService::doc;
std::vector<Employee*> EmployeeService::employeesList;

void EmployeeService::parseEmployeesData()
{
	if (!doc.load_file("sample.xml")) {
		std::cout << "Could not open file." << std::endl;
	}

	pugi::xml_node employees = doc.child("EmployeesData")
		.child("Employees");

	/*for (pugi::xml_node employee = employees.child("Employee");
		employee; employee = employee.next_sibling("Employee"))
	{

	}*/

	for (auto employee : employees) {
		Employee* emp = Employee::parseEmployee(employee);
		employeesList.push_back(emp);
	}
}

std::vector<Employee*> EmployeeService::getEmployeesList()
{
	return employeesList;
}
