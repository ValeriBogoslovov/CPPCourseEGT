#pragma once
#include <string>

#include "Workstation.h"

class Employee
{
public:
	Employee(std::string name, std::string type,
		int age, Workstation* workstation);

	friend std::ostream& operator<<(std::ostream& os,
		const Employee& employee);

	static Employee* parseEmployee(pugi::xml_node node);

private:
	std::string name;
	std::string type;
	int age;
	Workstation* workstation;
};

