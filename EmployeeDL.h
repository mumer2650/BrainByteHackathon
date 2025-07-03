#pragma once
#include <vector>
#include <string>
#include "Employee.h"

class EmployeeDL
{
public:
	static bool LoadAllEmployeesFromFile();
	static bool SaveAllEmployeesToFile(std::vector<Employee>& employees);
};