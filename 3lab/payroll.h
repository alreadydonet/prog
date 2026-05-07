#ifndef PAYROLL_H
#define PAYROLL_H

#include "work_type.h"

class PayrollDepartment {
    std::vector<WorkType*> works;

public:
    void addWorkType(WorkType* work) {
        if (!work)
            throw PayrollException("Null work type cannot be added");

        works.push_back(work);
    }

    double calculateAverageSalary() {
        if (works.empty())
            throw PayrollException("No work types available");

        double sum = 0;

        for (auto w : works) {
            sum += w->getSalary();
        }

        return sum / works.size();
    }

    ~PayrollDepartment() {
        for (auto w : works)
            delete w;
    }
};


#endif // PAYROLL_H
