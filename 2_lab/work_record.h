#ifndef WORK_RECORD_H
#define WORK_RECORD_H

#include "work_type.h"

class WorkRecord {
private:
    WorkType* type;
    int quantity;

public:
    WorkRecord(WorkType* type, int quantity)
        : type(type), quantity(quantity) {}

    double getTotal() const {
        return type->getRate() * quantity;
    }
};

#endif // WORK_RECORD_H
