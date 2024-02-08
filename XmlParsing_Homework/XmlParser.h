#pragma once
#include <string>
#include <stdexcept>
#include <memory>

#include "pugixml.h"
#include "Employee.h"
#include <vector>

using namespace pugi;



namespace xmlParse{
	xml_document doc;
	std::vector<std::unique_ptr<Employee>> employees;

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

	void createEmployeesFromFile(const char* fileName) {
		
		checkLoadFile(fileName);

		std::string empName = "";
		std::string empPosition = "";
		int empAge = 0;

		std::string wName = "";
		int wFloor = -1;
		int wDesk = -1;

		auto empIt = getEmployees();

		for (auto em : empIt.children("Employee"))
		{
			// em.attributes returns data inside Employee node
			for (auto attr : em.attributes())
			{
				// attr.name() can be "Name", "Type" or "Age"
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
			// em.children("Workstation") navigates to node Workstation inside Employee node
			// but not the actual attributes so we need another for loop for the attributes
			for (auto w : em.children("Workstation")) {
				// inside Workstation node
				for (auto ww : w.attributes()) {
					//ww.name() can be "Building", "Floor" or "Desc"
					// strcmp() needen to compare pugi::char_t to string
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

			employees.emplace_back(std::make_unique<Employee>(empName, empPosition, empAge, wName, wFloor, wDesk));
			
		}
		
	}

	void printEmployeesInformation() {
		std::cout << "Employee information: \n\n";
		for (auto const &emp : employees) {
			emp->printInfo();
		}
	}
}