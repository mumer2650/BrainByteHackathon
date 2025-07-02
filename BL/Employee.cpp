#include "Employee.h"
#include "../DL/EmployeeDL.h"
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
std::string Employee::getRole()
{
  return role;
}
int Employee::getEmployeeId()
{
  return EmployeeId;
}
std::string Employee::getPassword()
{
  return password;
}
std::string Employee::getEmail()
{
  return email;
}

// These are setters shayed kam krne paren
void Employee::setName(std::string name)
{
  if (name.empty())
  {
    throw std::invalid_argument("Email cannot be empty.");
  }
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
bool Employee::LoadAllEmployees()
{
  EmployeeDL::LoadAllEmployeesFromFile();
}
bool Employee::SaveAllEmployees()
{
  EmployeeDL::SaveAllEmployeesToFile();
}

bool Employee::AddEmployee(Employee &employee)
{
  for (Employee e : employees)
  {
    if (e.getEmail() == employee.getEmail())
    {
      return false;
    }
  }
  employees.push_back(employee);
  SaveAllEmployees();
  return true;
}

bool Employee::DeleteEmployee(std::string &email)
{
  // for (Employee e : employees)
  // {
  //   if (e.getEmail() == email)  wont work as .erase needs an iterator
  //   {
  //     employees.erase(e);
  //     return true;
  //   }
  // }

  for (auto it = employees.begin(); it != employees.end(); ++it)
  {
    if (it->getEmail() == email)
    {
      employees.erase(it);
      SaveAllEmployees();
      return true;
    }
  }
  return false;
}

std::vector<Employee> Employee::GetAllEmployees()
{
  return employees;
}