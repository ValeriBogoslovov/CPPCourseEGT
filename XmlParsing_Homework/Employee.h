#pragma once
#include <string>
#include "Workstation.h"

class Employee
{
public:
	Employee(std::string name, std::string position, int age, 
		std::string stationName, int floor, int descNum);

	std::string getName() const;
	std::string getPosition() const;
	int getAge() const;

	void printInfo() const;
private:
	void setName(std::string name);
	void setPosition(std::string position);
	void setAge(int age);

	Workstation workstation;
	std::string name;
	std::string position;
	int age;
};

