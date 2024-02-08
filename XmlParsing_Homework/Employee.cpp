#include "Employee.h"
#include <stdexcept>
#include <iostream>

Employee::Employee(std::string name, std::string position, int age,
    std::string stationName, int floor, int descNum) : workstation(stationName, floor, descNum)
{
	setName(name);
	setPosition(position);
	setAge(age);
}

std::string Employee::getName() const
{
    return this->name;
}

std::string Employee::getPosition() const
{
    return this->position;
}

int Employee::getAge() const
{
    return this->age;
}

void Employee::printInfo() const
{
	std::cout << "Name: " << this->getName();
	std::cout << "\n" << "Position: " << this->getPosition();
	std::cout << "\n" << "Age: " << this->getAge() << std::endl;
	std::cout << "Building name: " << this->workstation.getBuildingName() << std::endl;
	std::cout << "Building floor: " << this->workstation.getFloor() << std::endl;
	std::cout << "Office desc number: " << this->workstation.getDescNumber() << std::endl << std::endl;
}

void Employee::setName(std::string name)
{
	try
	{
		if (name.length() > 20)
		{
			throw std::length_error("Name too long. Name must have less than 21 characters.");
		}
		this->name = name;
	}
	catch (const std::length_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Employee::setPosition(std::string position)
{
	try
	{
		if (position.length() > 30)
		{
			throw std::length_error("Position name too long. Position must have less than 31 characters.");
		}
		this->position = position;
	}
	catch (const std::length_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Employee::setAge(int age)
{
	try
	{
		if (age >= 70 && age < 21)
		{
			throw std::range_error("Invalid age. Age must be lower than 70 and higher than 20.");
		}
		this->age = age;
	}
	catch (const std::range_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}
