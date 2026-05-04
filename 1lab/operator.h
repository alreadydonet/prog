#ifndef OPERATOR_H
#define OPERATOR_H

#include <string>



class InternetOperator {

    std::string name;
    int subscribers;

    static double tariffCost; // общая для всех

public:
    // Конструктор
    InternetOperator(const std::string& name, int subscribers)
        : name(name), subscribers(subscribers) {}

    // --- Свойства (геттеры/сеттеры) ---

    void setName(const std::string& n) {
        name = n;
    }

    std::string getName() const {
        return name;
    }

    void setSubscribers(int s) {
        if (s >= 0)
            subscribers = s;
    }

    int getSubscribers() const {
        return subscribers;
    }

    // --- Свойство только для записи ---
    static void setTariffCost(double cost) {
        if (cost >= 0)
            tariffCost = cost;
    }

    // --- Метод ---
    double getRevenue() const {
        return subscribers * tariffCost;
    }
};

// Инициализация static поля
double InternetOperator::tariffCost = 0.0;


#endif // OPERATOR_H
