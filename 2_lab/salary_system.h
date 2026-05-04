#ifndef SALARY_SYSTEM_H
#define SALARY_SYSTEM_H

#include <iostream>
#include "employee.h"

class SalarySystem {
private:
    std::vector<Employee> employees;
    std::vector<WorkType> workTypes;

    SalarySystem() {} // Singleton

public:
    SalarySystem(const SalarySystem&) = delete;
    SalarySystem& operator=(const SalarySystem&) = delete;

    static SalarySystem& getInstance() {
        static SalarySystem instance;
        return instance;
    }

    void addWorkType(const WorkType& w) {
        workTypes.push_back(w);
    }

    void addEmployee(const Employee& e) {
        employees.push_back(e);
    }

    Employee* findEmployee(const std::string& surname) {
        for (auto& e : employees)
            if (e.getSurname() == surname)
                return &e;
        return nullptr;
    }

    WorkType* getWorkType(int index) {
        if (index < 0 || index >= workTypes.size()) return nullptr;
        return &workTypes[index];
    }

    void printAllSalaries() {
        double total = 0;
        for (auto& e : employees) {
            double s = e.getSalary();
            std::cout << e.getSurname() << ": " << s << std::endl;
            total += s;
        }
        std::cout << "TOTAL: " << total << std::endl;
    }
};

#endif // SALARY_SYSTEM_H
