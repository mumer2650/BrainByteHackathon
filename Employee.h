#pragma once

#include <vector>
#include <string>
#include <sstream>

class Employee
{
private:
	int EmployeeId;
	std::string name;
	std::string email;
	std::string phonenum;
	std::string password;
	std::string role;

	static std::vector<Employee> employees;

public:
	Employee();
	Employee(int EmployeeId, std::string name, std::string email, std::string phonenum, std::string password, std::string role);
	~Employee();

public:
	int getEmployeeId();
	std::string getName();
	std::string getEmail();
	std::string getPhonenum();
	std::string getPassword();
	std::string getRole();

	void setEmployeeId();
	void setName(std::string name);
	void setEmail(std::string email);
	void setPhonenum(std::string phonenum);
	void setPassword(std::string password);
	void setRole(std::string role);

	static bool LoadAllEmployees();
	static bool SaveAllEmployees();

	static bool AddEmployee(Employee& employee);
	static bool DeleteEmployee(std::string& employee);

	static std::vector<Employee> GetAllEmployees();

	static void AddLoadedEmployee(const Employee& emp);
};
