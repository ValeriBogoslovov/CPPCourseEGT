#pragma once
#include "pugixml.h"


class Workstation
{
public:
	Workstation(int building, int floor, int desc);

	friend std::ostream& operator<<(std::ostream& os,
		const Workstation& workstation);

	static Workstation* parseWorkstation(pugi::xml_node node);

private:
	int building;
	int floor;
	int desc;
};

