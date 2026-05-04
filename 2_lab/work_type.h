#ifndef WORK_TYPE_H
#define WORK_TYPE_H

#include <string>

enum class WorkKind {
    HOURLY,
    PIECEWORK,
    BONUS
};

class WorkType {
private:
    int id;
    std::string name;
    double rate;
    WorkKind kind;

public:
    WorkType(int id, std::string name, double rate, WorkKind kind)
        : id(id), name(name), rate(rate), kind(kind) {}

    double getRate() const { return rate; }
    std::string getName() const { return name; }
};

#endif // WORK_TYPE_H
