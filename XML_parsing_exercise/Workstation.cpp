#include "Workstation.h"
#include <iostream>

Workstation::Workstation(int building, int floor, 
	int desc) : building(building), floor(floor), 
	desc(desc){}

Workstation* Workstation::
	parseWorkstation(pugi::xml_node node)
{
	int building = node.attribute("Building").as_int();
	int floor = node.attribute("Floor").as_int();
	int desc = node.attribute("Desc").as_int();

	return new Workstation(building, floor, desc);
}

std::ostream& operator<<(std::ostream& os,
	const Workstation& workstation) {

	os  << "Building: " << workstation.building << ", " <<
		"Floor: " << workstation.floor << ", " <<
		"Desc: " << workstation.desc << std::endl;
	return os;
}