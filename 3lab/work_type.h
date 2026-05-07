#ifndef WORK_TYPE_H
#define WORK_TYPE_H

#include "bonus_strat.h"
#include "except.h"

class WorkType {
    std::string name;
    double baseSalary;
    IBonusStrategy* bonusStrategy;

public:
    WorkType(std::string name, double salary, IBonusStrategy* strategy) {
        if (salary < 0)
            throw PayrollException("Salary cannot be negative");

        this->name = name;
        this->baseSalary = salary;
        this->bonusStrategy = strategy;
    }

    double getSalary() {
        return baseSalary + bonusStrategy->calculate(baseSalary);
    }

    std::string getName() {
        return name;
    }
};

#endif // WORK_TYPE_H
