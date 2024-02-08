#include <iostream>
#include "Employee.h"
#include "XmlParser.h"

using namespace xmlParse;

int main()
{

    createEmployeesFromFile("employees.xml");
    printEmployeesInformation();
    return 0;
}
