#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, std::string type, 
	int age, Workstation* workstation) : name(name), type(type),
	age(age),workstation(workstation){}

Employee* Employee::parseEmployee(pugi::xml_node node)
{
	std::string name = node.attribute("Name").value();
	std::string type = node.attribute("Type").value();
	int age = node.attribute("Age").as_int();

	Workstation* wPtr = Workstation::parseWorkstation(node.child("Workstation"));
	return new Employee(name, type, age, wPtr);
}

std::ostream& operator<<(std::ostream& os,
	const Employee& employee) {
	os << "Employee name: " << employee.name << ", " <<
		"Employee age: " << employee.age << ", " <<
		"Employee position: " << employee.type << ", "
		<< *employee.workstation << std::endl;
	return os;
}