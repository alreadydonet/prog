#ifndef PERCENT_STRAT_H
#define PERCENT_STRAT_H

#include "bonus_strat.h"
#include "except.h"

class NoBonusStrategy : public IBonusStrategy {
public:
    double calculate(double baseSalary) override {
        return 0;
    }
};

class PercentBonusStrategy : public IBonusStrategy {
    double percent;
public:
    PercentBonusStrategy(double percent) {
        if (percent < 0)
            throw PayrollException("Percent cannot be negative");
        this->percent = percent;
    }

    double calculate(double baseSalary) override {
        return baseSalary * percent / 100.0;
    }
};

#endif // PERCENT_STRAT_H
