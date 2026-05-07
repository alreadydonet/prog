#ifndef EXCEPT_H
#define EXCEPT_H

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

class PayrollException : public std::exception {
    std::string message;
public:
    PayrollException(std::string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif // EXCEPT_H
