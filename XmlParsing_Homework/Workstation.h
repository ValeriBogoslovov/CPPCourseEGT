#pragma once
#include <string>

class Workstation
{
public:
	Workstation(std::string name, int floor, int descNumber);

	std::string getBuildingName() const;
	int getFloor() const;
	int getDescNumber() const;

private:
	void setBuildingName(std::string name);
	void setFloor(int floor);
	void setDescNumber(int number);

	std::string buildingName;
	int floor;
	int descNumber;
};

