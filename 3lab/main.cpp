#include <iostream>

#include "payroll.h"
#include "percent_strat.h"

int main()
{
    try {
        PayrollDepartment dept;

        dept.addWorkType(new WorkType(
            "Developer",
            1000,
            new PercentBonusStrategy(20)
            ));

        dept.addWorkType(new WorkType(
            "Tester",
            800,
            new NoBonusStrategy()
            ));

       std::cout << "Average salary: "
             << dept.calculateAverageSalary()
             << std::endl;

    } catch (PayrollException& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
