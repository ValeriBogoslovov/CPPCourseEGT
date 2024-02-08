#include "Workstation.h"
#include <stdexcept>
#include <iostream>

Workstation::Workstation(std::string name, int floor, int descNumber)
{
    setBuildingName(name);
    setFloor(floor);
    setDescNumber(descNumber);
}

std::string Workstation::getBuildingName() const
{
    return this->buildingName;
}

int Workstation::getFloor() const
{
    return this->floor;
}

int Workstation::getDescNumber() const
{
    return this->descNumber;
}

void Workstation::setBuildingName(std::string name)
{
	try
	{
		if (name.length() > 35)
		{
			throw std::length_error("Building name too long, name must be smaller than 36 characters.");
		}
		this->buildingName = name;
	}
	catch (const std::length_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Workstation::setFloor(int floor)
{
	try
	{
		if (floor > 35 && floor < 0)
		{
			throw std::range_error("Invalid building floor. Floor must be lower than 36 and higher than 0.");
		}
		this->floor = floor;
	}
	catch (const std::range_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Workstation::setDescNumber(int number)
{
	try
	{
		if (number > 50 && number < 1)
		{
			throw std::range_error("Invalid desc number. Number must be higher than 0 and lower than 51.");
		}
		this->descNumber = number;
	}
	catch (const std::range_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}
