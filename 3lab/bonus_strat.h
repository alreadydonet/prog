#ifndef BONUS_STRAT_H
#define BONUS_STRAT_H

class IBonusStrategy {
public:
    virtual double calculate(double baseSalary) = 0;
    virtual ~IBonusStrategy() = default;
};

#endif // BONUS_STRAT_H
