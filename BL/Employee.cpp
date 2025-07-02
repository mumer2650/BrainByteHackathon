#include "Employee.h"

Employee::Employee()
{
  EmployeeId = -1;
  name = "";
  email = "";
  phonenum = "";
  password = "";
  role = "";
}

Employee::~Employee()
{
}

Employee::Employee(int EmployeeId, std::string name, std::string email, std::string phonenum, std::string password, std::string role)
{
  this->EmployeeId = EmployeeId;
  this->name = name;
  this->email = email;
  this->phonenum = phonenum;
  this->password = password;
  this->role = role;
}

// Getters probably or bnane per jaeyn gy dekhoon ga
std::string Employee::getrole()
{
  return role;
}
int Employee::getEmployeeId()
{
  return EmployeeId;
}
std::string Employee::getpassword()
{
  return password;
}

// These are setters shayed kam krne paren
void Employee::setName(std::string name)
{
  this->name = name;
}
void Employee::setEmail(std::string email)
{
  this->email = email;
}
void Employee::setPhonenum(std::string phonenum)
{
  this->phonenum = phonenum;
}
void Employee::setPassword(std::string password)
{
  this->password = password;
}
void Employee::setRole(std::string role)
{
  this->role = role;
}

// Other functionalities
void Employee::LoadAllEmployees()
{
}
void Employee::SaveAllEmployees()
{
}
void Employee::AddEmployee(Employee &employee)
{
}
void Employee::DeleteEmployee(Employee &employee)
{
}
std::vector<Employee> GetAllEmployees()
{
}