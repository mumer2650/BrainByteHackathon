#include "EmployeeDL.h"
#include "Employee.h"
#include <fstream>

bool EmployeeDL::LoadAllEmployeesFromFile() {}
bool EmployeeDL::SaveAllEmployeesToFile(std::vector<Employee>& employees)
{
    std::ofstream file("credentials.txt", std::ios::out);
    if (!file.is_open())
    {
        return false;
    }

    for (Employee& emp : employees)
    {
        file << emp.getEmployeeId() << ","
            << emp.getEmployeeId() << ","
            << emp.getName() << ","
            << emp.getEmail() << ","
            << emp.getPhonenum() << ","
            << emp.getPassword() << ","
            << emp.getRole() << "\n";
    }

    file.close();
    return true;
}