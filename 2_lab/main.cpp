#include <iostream>
#include "salary_system.h"


int main()
{
    SalarySystem& sys = SalarySystem::getInstance();


    int nextId = 1;
    while (true) {
        std::cout << "\n1. Add work type\n";
        std::cout << "2. Add employee\n";
        std::cout << "3. Add work to employee\n";
        std::cout << "4. Show salary by surname\n";
        std::cout << "5. Show total payments\n";
        std::cout << "0. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            std::string name;
            double rate;
            std::cout << "Name: ";
            std::cin >> name;
            std::cout << "Rate: ";
            std::cin >> rate;

            sys.addWorkType(
                WorkType(nextId++, name, rate, WorkKind::HOURLY)
                );
        }

        if (choice == 2) {
            std::string surname;
            std::cout << "Surname: ";
            std::cin >> surname;

            sys.addEmployee(Employee(surname));
        }

        if (choice == 3) {
            std::string surname;
            std::cout << "Surname: ";
            std::cin >> surname;

            Employee* emp = sys.findEmployee(surname);

            if (!emp) {
                std::cout << "Employee not found\n";
                continue;
            }

            sys.printWorkTypes();

            int typeIndex;
            int qty;

            std::cout << "Work type index: ";
            std::cin >> typeIndex;

            std::cout << "Quantity: ";
            std::cin >> qty;

            WorkType* wt = sys.getWorkType(typeIndex);

            if (!wt) {
                std::cout << "Invalid work type\n";
                continue;
            }

            emp->addWork(WorkRecord(wt, qty));

            std::cout << "Work added\n";
        }

        if (choice == 4) {
            std::string surname;

            std::cout << "Surname: ";
            std::cin >> surname;

            Employee* emp = sys.findEmployee(surname);

            if (!emp) {
                std::cout << "Employee not found\n";
                continue;
            }

            std::cout << "Salary: "
                      << emp->getSalary()
                      << std::endl;
        }

        if (choice == 5) {
            sys.printAllSalaries();
        }

    }

    return 0;
}
