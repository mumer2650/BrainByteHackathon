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
  std::string getrole();
  int getEmployeeId();
  std::string getpassword();

  void setName(std::string name);
  void setEmail(std::string email);
  void setPhonenum(std::string phonenum);
  void setPassword(std::string password);
  void setRole(std::string role);

  static void LoadAllEmployees();
  static void SaveAllEmployees();

  static void AddEmployee(Employee &employee);
  static void DeleteEmployee(Employee &employee);

  static std::vector<Employee> GetAllEmployees();
};
