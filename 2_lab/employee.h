#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <vector>
#include "work_record.h"

class Employee {
private:
    std::string surname;
    std::vector<WorkRecord> records;

public:
    Employee(std::string surname) : surname(surname) {}

    std::string getSurname() const { return surname; }

    void addWork(const WorkRecord& r) {
        records.push_back(r);
    }

    double getSalary() const {
        double sum = 0;
        for (const auto& r : records)
            sum += r.getTotal();
        return sum;
    }
};

#endif // EMPLOYEE_H
