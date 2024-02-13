
#include "EmployeeService.h"
#include <iostream>

int main() {
	
	EmployeeService::parseEmployeesData();

	for (auto empl : EmployeeService::getEmployeesList()) {
		std::cout << *empl;
	}

	return 0;
}