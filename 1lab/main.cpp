#include <iostream>
#include "hr.h"

using namespace std;

int main()
{
    HRDepartment hr("TechCorp", 50, 15.0, 0.13);

    // задаём норму часов (write-only)
    HRDepartment::setMonthlyHours(160);

    std::cout << "Company: " << hr.getCompanyName() << std::endl;
    std::cout << "Employees: " << hr.getEmployees() << std::endl;
    std::cout << "Total income tax: " << hr.getTotalIncomeTax() << std::endl;

    return 0;
}
