#pragma once
#include <string>
#include <stdexcept>

#include "pugixml.h"
#include "Employee.h"
#include <vector>

using namespace pugi;

namespace xmlParse{
	xml_document doc;
	std::vector<Employee*> employees;

	bool checkLoadFile(const char* fileName) {
		try
		{
			if (!doc.load_file(fileName))
			{
				throw std::invalid_argument("Invalid file name, file path or file extension. Make sure you are passing valid file name and extension.\nExample - {filename}.xml.");
			}
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << e.what() << std::endl;
		}
		return true;
	}

	xml_node getEmployees() {
		return doc.child("EmployeesData").child("Employees");
	}

	xml_node getWorkstaion() {
		return getEmployees().child("Employee");
	}

	void createEmployeesFromFile(const char* fileName) {
		
		checkLoadFile(fileName);

		std::string empName = "";
		std::string empPosition = "";
		int empAge = 0;

		std::string wName = "";
		int wFloor = -1;
		int wDesk = -1;

		auto empIt = getEmployees();
		auto workIt = doc.child("EmployeesData").child("Employees").child("Employee");

		for (auto em : empIt.children("Employee"))
		{

			for (auto attr : em.attributes())
			{
				if (strcmp(attr.name(),"Name") == 0)
				{
					empName = attr.value();
					
				}
				else if (strcmp(attr.name(), "Type") == 0)
				{
					empPosition = attr.value();
				}
				else if (strcmp(attr.name(), "Age") == 0)
				{
					empAge = std::stoi(attr.value());
				}

			}
			for (auto w : em.children("Workstation")) {
				for (auto ww : w.attributes()) {
					if (strcmp(ww.name(), "Building") == 0)
					{
						wName = ww.value();
					}
					else if (strcmp(ww.name(), "Floor") == 0)
					{
						wFloor = std::stoi(ww.value());
					}
					else if (strcmp(ww.name(), "Desc") == 0)
					{
						wDesk = std::stoi(ww.value());
					}
				}
			}
			Employee* em = new Employee(empName, empPosition, empAge, wName, wFloor, wDesk);
			employees.push_back(em);
		}
		
	}

	void printEmployeesInformation() {
		std::cout << "Employee information: \n\n";
		for (auto emp : employees) {
			emp->printInfo();
		}
	}
}