#include "EmployeeDL.h"
#include "Employee.h"
#include <fstream>
#include<sstream>

bool EmployeeDL::LoadAllEmployeesFromFile()
{
	std::ifstream file("credentials.txt", std::ios::in);
	if (!file.is_open())
		return false;

	std::string line;
	while (getline(file, line))
	{
		std::stringstream ss(line);
		std::string idstring, name, email, phonenum, password, role;

		getline(ss, idstring, ',');
		getline(ss, name, ',');
		getline(ss, email, ',');
		getline(ss, phonenum, ',');
		getline(ss, password, ',');
		getline(ss, role, ',');

		int id = std::stoi(idstring);
		Employee emp(id, name, email, phonenum, password, role);
		Employee::AddLoadedEmployee(emp);
		}
	file.close();
	return true;
}
bool EmployeeDL::SaveAllEmployeesToFile(std::vector<Employee>& employees)
{
	std::ofstream file("credentials.txt", std::ios::out);
	if (!file.is_open())
		return false;

	for (Employee& emp : employees)
	{
		file << emp.getEmployeeId() << ","
			<< emp.getName() << ","
			<< emp.getEmail() << ","
			<< emp.getPhonenum() << ","
			<< emp.getPassword() << ","
			<< emp.getRole() << "\n";
	}

	file.close();
	return true;
}