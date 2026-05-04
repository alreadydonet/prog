#ifndef HR_H
#define HR_H

#include <string>



class HRDepartment {
private:
    std::string companyName;
    int employees;
    double hourlyRate;
    double incomeTaxRate;

    static int monthlyHours; // общая для всех

public:
    // Конструктор
    HRDepartment(const std::string& name, int emp, double rate, double tax)
        : companyName(name), employees(emp), hourlyRate(rate), incomeTaxRate(tax) {}

    // --- Свойства ---

    void setCompanyName(const std::string& name) {
        companyName = name;
    }

    std::string getCompanyName() const {
        return companyName;
    }

    void setEmployees(int emp) {
        if (emp >= 0)
            employees = emp;
    }

    int getEmployees() const {
        return employees;
    }

    void setHourlyRate(double rate) {
        if (rate >= 0)
            hourlyRate = rate;
    }

    double getHourlyRate() const {
        return hourlyRate;
    }

    void setIncomeTaxRate(double tax) {
        if (tax >= 0)
            incomeTaxRate = tax;
    }

    double getIncomeTaxRate() const {
        return incomeTaxRate;
    }

    // --- Свойство только для записи ---
    static void setMonthlyHours(int hours) {
        if (hours > 0)
            monthlyHours = hours;
    }

    // --- Метод ---
    double getTotalIncomeTax() const {
        double salaryPerEmployee = hourlyRate * monthlyHours;
        double taxPerEmployee = salaryPerEmployee * incomeTaxRate;
        return taxPerEmployee * employees;
    }
};

// Инициализация static поля
int HRDepartment::monthlyHours = 0;

#endif // HR
